#!/bin/sh
# BF16 sigmoid streaming ablation - PPA driver. Mirrors run_ppa.sh 1:1.
#   ./run_ppa_sigmoid.sh sim          -> build+run all 15 configs, print the cycles/op table
#   ./run_ppa_sigmoid.sh verilog      -> emit one synthesizable .v per config into ppa/verilog/
#   ./run_ppa_sigmoid.sh verbose      -> per-transaction logs for ALL configs -> ppa/logs/<cfg>.log
#   ./run_ppa_sigmoid.sh verbose r8_n32 -> per-transaction log for ONE config, straight to stdout
#   ./run_ppa_sigmoid.sh spot r4_n64  -> just the 12 manual-verification SPOT CHECK blocks
#   ./run_ppa_sigmoid.sh              -> sim + verilog
set -e
cd "$(dirname "$0")"

DUTS="r1 r2 r3 r4 r6 r8 r12 r16"   # 8 distinct designs (one per lane count)
CFGS="r1_n64 r2_n64 r3_n64 r4_n64 r6_n64 r12_n64 r4_n16 r4_n32 r4_n96 r4_n192 r8_n32 r8_n96 r2_n128 r6_n128 r16_n48"

do_sim () {
  mkdir -p ppa/obj ppa/logs
  SUMMARY=()
  local n_total
  n_total=$(echo $CFGS | wc -w)
  local i=0

  for c in $CFGS; do
    i=$((i + 1))
    echo ""
    echo "=================================================================="
    echo "  [$i/$n_total] $c"
    echo "=================================================================="

    echo "  -> bsc compiling mkTbSig_$c ..."
    if ! bsc -sim -bdir ppa/obj -simdir ppa/obj -info-dir ppa/obj \
        -g mkTbSig_$c -u Tb_BF16Sigmoid_SIMD_AblationPPA.bsv > ppa/logs/build_$c.log 2>&1; then
      echo "  [$c] BSC COMPILE FAILED - see ppa/logs/build_$c.log"
      tail -n 30 ppa/logs/build_$c.log
      SUMMARY+=("$c : BUILD FAILED")
      continue
    fi

    if ! bsc -sim -e mkTbSig_$c -bdir ppa/obj -simdir ppa/obj -o ppa/sim_$c >> ppa/logs/build_$c.log 2>&1; then
      echo "  [$c] BSC LINK FAILED - see ppa/logs/build_$c.log"
      tail -n 30 ppa/logs/build_$c.log
      SUMMARY+=("$c : LINK FAILED")
      continue
    fi
    echo "  -> build OK, running simulation ..."

    # Stream the sim's own output live to the terminal AND capture it to
    # the per-config log, via tee, so you can watch it as it runs instead
    # of staring at a blank terminal until everything finishes.
    ./ppa/sim_$c 2>&1 | tee ppa/logs/run_$c.log

    RESULT_LINE=$(grep "TEST RESULT" ppa/logs/run_$c.log | tail -1)
    SUMMARY+=("$c : ${RESULT_LINE:-NO RESULT LINE FOUND (check ppa/logs/run_$c.log)}")
  done

  echo ""
  echo "=================================================================="
  echo "  FINAL SUMMARY"
  echo "=================================================================="
  for line in "${SUMMARY[@]}"; do
    echo "  $line"
  done
  echo ""
  echo "Full per-config banners + progress pings + per-op summary + 12 SPOT"
  echo "CHECK blocks are in ppa/logs/run_<cfg>.log (build logs: ppa/logs/build_<cfg>.log)"
  echo "  e.g.  ./run_ppa_sigmoid.sh spot r4_n64"
}

do_verilog () {
  mkdir -p ppa/verilog ppa/vobj
  rm -f ppa/verilog/mkSigmoidAblation_*.v
  for d in $DUTS; do
    bsc -verilog -bdir ppa/vobj -vdir ppa/verilog -info-dir ppa/vobj \
        -g mkSigmoidAblation_$d -u BF16Sigmoid_SIMD_AblationPPA.bsv > /dev/null 2>&1
  done
  echo ""
  echo "Verilog for synthesis in ppa/verilog/  (top module = mkSigmoidAblation_r<lanes>)"
  echo "Also copy FIFO2.v and RevertReg.v from \$BLUESPECDIR/Verilog/ before synth."
  for f in ppa/verilog/mkSigmoidAblation_*.v; do
    printf "  %-32s %5s lines\n" "$(basename $f)" "$(wc -l < $f | tr -d ' ')"
  done
}

# Verbose build: -D VERBOSE turns on the per-input / per-output banners.
build_verbose () {
  c=$1
  mkdir -p ppa/vobj_verbose
  bsc -sim -D VERBOSE -bdir ppa/vobj_verbose -simdir ppa/vobj_verbose \
      -info-dir ppa/vobj_verbose -g mkTbSig_$c -u Tb_BF16Sigmoid_SIMD_AblationPPA.bsv > /dev/null 2>&1
  bsc -sim -e mkTbSig_$c -bdir ppa/vobj_verbose -simdir ppa/vobj_verbose \
      -o ppa/vsim_$c > /dev/null 2>&1
}

do_verbose () {
  if [ -n "$1" ]; then
    build_verbose "$1"
    ./ppa/vsim_"$1"
    return
  fi
  mkdir -p ppa/logs
  for c in $CFGS; do
    echo "  -> building + running verbose $c ..."
    build_verbose $c
    ./ppa/vsim_$c 2>&1 | tee ppa/logs/$c.log
    printf "  %-9s -> ppa/logs/%-12s %6s lines   %s\n" \
           "$c" "$c.log" "$(wc -l < ppa/logs/$c.log | tr -d ' ')" \
           "$(grep -c '^>>> INPUT' ppa/logs/$c.log | tr -d ' ') inputs / $(grep -c '^<<< OUTPUT' ppa/logs/$c.log | tr -d ' ') outputs"
  done
}

case "${1:-all}" in
  sim)     do_sim ;;
  verilog) do_verilog ;;
  verbose) do_verbose "$2" ;;
  spot)    sed -n '/^+---/,/^+---/p' ppa/logs/run_"${2:-r4_n64}".log ;;
  *)       do_sim; do_verilog ;;
esac

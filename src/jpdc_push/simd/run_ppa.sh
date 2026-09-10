#!/bin/sh
# BF16 SIMD streaming ablation - PPA driver.
#   ./run_ppa.sh sim          -> build+run all 15 configs, print the cycles/op table
#   ./run_ppa.sh verilog      -> emit one synthesizable .v per config into ppa/verilog/
#   ./run_ppa.sh verbose      -> per-transaction logs for ALL configs -> ppa/logs/<cfg>.log
#   ./run_ppa.sh verbose r8_n32 -> per-transaction log for ONE config, straight to stdout
#   ./run_ppa.sh spot r4_n64  -> just the 12 manual-verification SPOT CHECK blocks
#   ./run_ppa.sh              -> sim + verilog
set -e
cd "$(dirname "$0")"

CFGS="r1_n64 r2_n64 r3_n64 r4_n64 r6_n64 r12_n64 r4_n16 r4_n32 r4_n96 r4_n192 r8_n32 r8_n96 r2_n128 r6_n128 r16_n48"

do_sim () {
  mkdir -p ppa/obj
  for c in $CFGS; do
    bsc -sim -bdir ppa/obj -simdir ppa/obj -info-dir ppa/obj \
        -g mkTb_$c -u Tb_BF16_SIMD_AblationPPA.bsv > /dev/null 2>&1
    bsc -sim -e mkTb_$c -bdir ppa/obj -simdir ppa/obj -o ppa/sim_$c > /dev/null 2>&1
  done
  mkdir -p ppa/logs
  echo "config  |  r   n  | cols | cycles/op | latency | checked | status"
  echo "--------+---------+------+-----------+---------+---------+-------"
  for c in $CFGS; do
    ./ppa/sim_$c > ppa/logs/run_$c.log
    tail -1 ppa/logs/run_$c.log
  done
  echo ""
  echo "Per-config banners + 12 SPOT CHECK blocks: ppa/logs/run_<cfg>.log"
  echo "  e.g.  ./run_ppa.sh spot r4_n64" 
}

do_verilog () {
  mkdir -p ppa/verilog ppa/vobj
  for c in $CFGS; do
    bsc -verilog -bdir ppa/vobj -vdir ppa/verilog -info-dir ppa/vobj \
        -g mkAblation_$c -u BF16_SIMD_AblationPPA.bsv > /dev/null 2>&1
  done
  echo ""
  echo "Verilog for synthesis in ppa/verilog/  (top module = mkAblation_<config>)"
  ls -1 ppa/verilog/mkAblation_*.v 2>/dev/null | sed 's/^/  /'
}

# Verbose build: -D VERBOSE turns on the per-input / per-output banners.
build_verbose () {
  c=$1
  mkdir -p ppa/vobj_verbose
  bsc -sim -D VERBOSE -bdir ppa/vobj_verbose -simdir ppa/vobj_verbose \
      -info-dir ppa/vobj_verbose -g mkTb_$c -u Tb_BF16_SIMD_AblationPPA.bsv > /dev/null 2>&1
  bsc -sim -e mkTb_$c -bdir ppa/vobj_verbose -simdir ppa/vobj_verbose \
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
    build_verbose $c
    ./ppa/vsim_$c > ppa/logs/$c.log
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

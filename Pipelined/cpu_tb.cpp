#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vcpu.h"
#include <iostream>
#include <iomanip>

#include "vbuddy.cpp"     // include vbuddy code
#define MAX_SIM_CYC 100000

int main(int argc, char **argv, char **env) {
  int simcyc;     // simulation clock count
  int tick;       // each CLK cycle has two ticks for two edges
  int trigcyc;

  Verilated::commandArgs(argc, argv);
  
  // init cpu verilog instance
  Vcpu* cpu = new Vcpu;
  
  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  cpu->trace (tfp, 99);
  tfp->open ("cpu.vcd");

  // init Vbuddy
  if (vbdOpen()!=1) return(-1);
  vbdHeader("Ahmad Test");
  vbdSetMode(1);

  // initialize simulation inputs
  cpu->CLK = 0;
  cpu->rst = 0;
  cpu->trigger = 0;

  for (simcyc = 0; simcyc < MAX_SIM_CYC; simcyc++) {

    for (tick=0; tick<2 /*&& vbdFlag()*/; tick++) {
      tfp->dump (2*simcyc+tick);
      cpu->CLK = !cpu->CLK;
      cpu->eval ();
    }

    vbdBar(cpu->a0);
    vbdCycle(simcyc);

    if (simcyc > trigcyc + 7) cpu->trigger = 0;

    if (vbdFlag() || vbdGetkey() == 't'){
      cpu->trigger = 1;
      trigcyc = simcyc;
    }
    
    // cpu->trigger = vbdFlag() || vbdGetkey() == 't';

    if (Verilated::gotFinish())  exit(0);
  }
  //bdClose();
  tfp->close(); 
  exit(0);
}

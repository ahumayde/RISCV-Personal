#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vcpu.h"
#include <iostream>
#include <iomanip>
#include "vbuddy.cpp"    
#define MAX_SIM_CYC 100000

int main(int argc, char **argv, char **env) {
  int simcyc;     // Simulation Cycle 
  int trigcyc;    // Cycle trigger is set
  int tick;       // Clock ticks

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

    // Clock ticks
    for (tick=0; tick<2; tick++) {
      tfp->dump (2*simcyc+tick);
      cpu->CLK = !cpu->CLK;
      cpu->eval ();
    }

    // Output to Vbuddy
    vbdBar(cpu->a0);
    vbdCycle(simcyc);
    
    // Reset trigger
    if (simcyc > trigcyc + 7) cpu->trigger = 0;

    // Set trigger
    if (vbdFlag() || vbdGetkey() == 't') {
      cpu->trigger = 1;
      trigcyc = simcyc;
    }
    
    // Exit 1
    if (Verilated::gotFinish())  exit(0);
  }
  // Exit 2
  vbdClose();
  tfp->close(); 
  exit(0);
}

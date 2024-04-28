// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VIDU_H_
#define VERILATED_VIDU_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class VIDU__Syms;
class VIDU___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class VIDU VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VIDU__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&Reg__02Eclk,0,0);
    VL_IN8(&top__02Eclk,0,0);
    VL_IN8(&Reg__02Erst,0,0);
    VL_IN8(&din,0,0);
    VL_OUT8(&dout,0,0);
    VL_IN8(&Reg__02Ewen,0,0);
    VL_IN8(&top__02Erst,0,0);
    VL_IN8(&top__02Ewen,0,0);
    VL_OUT8(&out,0,0);
    VL_IN8(&key,0,0);
    VL_IN8(&lut,3,0);
    VL_IN8(&opcode,6,0);
    VL_OUT8(&alu_ctrl,1,0);
    VL_IN(&instruction,31,0);
    VL_IN(&pc,31,0);
    VL_OUT(&rd_data,31,0);
    VL_OUT(&next_pc,31,0);
    VL_OUT(&alu_result,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VIDU___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VIDU(VerilatedContext* contextp, const char* name = "TOP");
    explicit VIDU(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VIDU();
  private:
    VL_UNCOPYABLE(VIDU);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard

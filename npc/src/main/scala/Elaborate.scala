// object Elaborate extends App {
//   val firtoolOptions = Array(
//     "--split-verilog",
//     "--lowering-options=" + List(
//     // make yosys happy
//     // see https://github.com/llvm/circt/blob/main/docs/VerilogGeneration.md
//     "disallowLocalVariables",
//     "disallowPackedArrays",
//     "locationInfoStyle=wrapInAtSquareBracket"
//   ).reduce(_ + "," + _),
//   "-o=build"
//   )
//   circt.stage.ChiselStage.emitSystemVerilogFile(new NPC(), args, firtoolOptions)
// }
object Elaborate extends App {
  val firtoolOptions = Array(
  "--lowering-options=" + List(
    // make yosys happy
    // see https://github.com/llvm/circt/blob/main/docs/VerilogGeneration.md
    "disallowLocalVariables",
    "disallowPackedArrays",
    "locationInfoStyle=wrapInAtSquareBracket"
  ).reduce(_ + "," + _),
    "--split-verilog",
    "-o=vsrc",
  )

  circt.stage.ChiselStage.emitSystemVerilogFile(
    new riscv32.top(),
    args, 
    firtoolOptions,
  )

}
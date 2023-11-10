/* New pass manager */
#include "llvm/Transforms/CSC512/CSC512.h"

using namespace llvm;

PreservedAnalyses CSC512Pass::run(Module &M,  ModuleAnalysisManager &AM) {
  errs() << "Module ?:\n" << M << "\n";
  for (auto &F : M) {
    errs() << "CSC 512: " << F.getName() << "\n";
    errs() << "Function body:\n" << F << "\n";
    for (auto& B : F) {
      errs() << "Basic block:\n" << B << "\n";
      for (auto& I : B) {
        errs() << "Instruction: " << I << "\n";
      }
    }
  }
  return PreservedAnalyses::all();
}


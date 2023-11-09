/* New pass manager */
#include "llvm/Transforms/CSC512/CSC512.h"

using namespace llvm;

PreservedAnalyses CSC512Pass::run(Function &F,  FunctionAnalysisManager &AM) {
  errs() << "CSC 512: " << F.getName() << "\n";
  return PreservedAnalyses::all();
}


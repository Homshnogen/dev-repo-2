#ifndef LLVM_TRANSFORMS_CSC512_CSC512_H
#define LLVM_TRANSFORMS_CSC512_CSC512_H

#include "llvm/IR/PassManager.h"

namespace llvm {

class CSC512Pass : public PassInfoMixin<CSC512Pass> {
public:
  PreservedAnalyses run(Module &M, ModuleAnalysisManager &AM);
};

} // namespace llvm

#endif // LLVM_TRANSFORMS_CSC512_CSC512_H
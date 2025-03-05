#include "TargetInfo/SimBackEndTargetInfo.h"
#include "llvm/MC/TargetRegistry.h"
using namespace llvm;

Target &llvm::getTheSimBackEndTarget() {
  static Target TheSimBackEndTarget;
  return TheSimBackEndTarget;
}

extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeSimBackEndTargetInfo() {
  RegisterTarget<Triple::SimBackEnd> X(getTheSimBackEndTarget(), "SimBackEnd", "SimBackEnd 32",
                                   "SimBackEnd");
}

#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/PostDominators.h"
#include "llvm/IR/Constants.h"
#include "llvm/IR/DebugInfoMetadata.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/Instructions.h"
#include "llvm/IR/Metadata.h"
#include "llvm/IR/Module.h"
#include "llvm/Pass.h"
#include "llvm/Support/raw_ostream.h"

using namespace llvm;

namespace {

struct SyncCostProfiler : public ModulePass {
    static char ID;
    SyncCostProfiler() : ModulePass(ID) {}

    void getAnalysisUsage(AnalysisUsage &AU) const override {
        // TODO: declare LoopInfoWrapperPass and
        //       PostDominatorTreeWrapperPass as required
        AU.setPreservesAll();
    }

    std::vector<Function *> collectKernels(Module &M) {
        // TODO: read nvvm.annotations and return kernels in order
        return {};
    }

    bool runOnModule(Module &M) override {
        // TODO: for each kernel, get LI and PDT,
        //       walk instructions, detect sync calls,
        //       print output in required format
        return false;
    }
};

} // namespace

char SyncCostProfiler::ID = 0;
static RegisterPass<SyncCostProfiler> X(
    "sync-analyzer",
    "CUDA Synchronisation Analyzer",
    false, true
);

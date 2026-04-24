# If we don't need RTTI or EH, there's no reason to export anything
# from the hello plugin.

add_llvm_library(sync_analysis MODULE BUILDTREE_ONLY
  main.cpp

  DEPENDS
  intrinsics_gen
  PLUGIN_TOOL
  opt
  )

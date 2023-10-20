add_llvm_library( LLVMCSC512 MODULE BUILDTREE_ONLY
  Hello.cpp

  PLUGIN_TOOL
  opt
  )

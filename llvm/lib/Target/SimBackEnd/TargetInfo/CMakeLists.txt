add_llvm_component_library(LLVMSimBackEndInfo
  SimBackEndTargetInfo.cpp

  LINK_COMPONENTS
  MC
  Support

  ADD_TO_COMPONENT
  SimBackEnd
  )

add_llvm_component_library(LLVMSimBackEndDesc
  SimBackEndMCTargetDesc.cpp

  LINK_COMPONENTS
  MC
  Support
  SimBackEndInfo

  ADD_TO_COMPONENT
  SimBackEnd
)

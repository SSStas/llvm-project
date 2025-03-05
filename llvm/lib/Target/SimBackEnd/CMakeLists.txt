add_llvm_component_group(SimBackEnd)

add_llvm_target(SimBackEndCodeGen
  SimBackEndTargetMachine.cpp

  LINK_COMPONENTS
  CodeGen
  Core
  Support
  Target
  SimBackEndInfo

  ADD_TO_COMPONENT
  SimBackEnd
  )

add_subdirectory(MCTargetDesc)
add_subdirectory(TargetInfo)

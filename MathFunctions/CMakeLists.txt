add_library(MathFunctions mysqrt.cxx)

#add the install targets
install(TARGETS MathFunctions DESTINATION bin)
install(FILES MathFunction.h DESTINATION include)

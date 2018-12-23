cmake_minimum_required(VERSION 2.6)
project(Tutorial)

SET(CMAKE_C_COMPILER gcc)
SET(CMAKE_CXX_COMPILER g++)
add_compile_options(-std=c++11)

#The version number
set (Tutorial_VERSION_MAJOR 1)
set (Tutorial_VERSION_MINOR 0)

configure_file(
	"${PROJECT_SOURCE_DIR}/TutorialConfig.h.in"
	"${PROJECT_BINARY_DIR}/TutorialConfig.h"
	)

include_directories("${PROJECT_BINARY_DIR}")



add_executable(Tutorial tutorial.cxx)

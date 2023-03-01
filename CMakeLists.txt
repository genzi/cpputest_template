# CMake definitions, compiler flags and useful variables
cmake_minimum_required(VERSION 3.7)
project(cmakeCppUTestDemo C CXX)

add_compile_options(-Wall -Werror)

set(APP_NAME demoApp)
set(APP_LIB1_NAME demoAppLib1)
set(APP_LIB2_NAME demoAppLib2)

# Include application build instructions
add_subdirectory(src)

# include tests build instructions
option(UT "Compile the UTs" OFF)
if(UT)
  add_subdirectory(ut)
endif(UT)

# CMakeList.txt : CMake project for 29.4.1, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("29.4.1")

# Add source to this project's executable.
add_executable (29.4.1 "main.cpp" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET 29.4.1 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.

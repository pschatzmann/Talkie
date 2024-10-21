cmake_minimum_required(VERSION 3.16)

# set the project name
project(talkie)

# lots of warnings and all warnings as errors
add_compile_options(-Wall -Wextra )
set(CMAKE_CXX_STANDARD 17)

add_library(talkie INTERFACE)

target_include_directories(talkie INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/src)

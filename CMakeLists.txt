cmake_minimum_required(VERSION 3.22)

# Project settings
project(
        cp_cpp_wasm_classes
        VERSION 1.0.0
        DESCRIPTION ""
        LANGUAGES CXX C
)

# CMake scripts
include(cmake/project_defaults.cmake) # Default project settings

# App framework and app stub
add_subdirectory(lib)
add_subdirectory(wasm_lib)

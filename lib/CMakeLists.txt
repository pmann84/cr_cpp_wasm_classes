set(LIB_PROJECT_NAME "${PROJECT_NAME}_Lib")
message(STATUS "Setting up project for library ${LIB_PROJECT_NAME}")

add_library(${LIB_PROJECT_NAME} Vector.hpp Particle.cpp Particle.hpp)

# Exports all the include directories needed for this library
target_include_directories(${LIB_PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
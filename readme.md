# cr-cpp-wasm-classes
## Table of Contents
- [What is this?](#what-is-this)
- [Prerequisites](#prerequisites)
- [Dependencies](#dependencies)
- [Clone](#clone)
- [Configure and Build](#configure-and-build)

## What is this?
TODO!

## Prerequisites
- CMake

## Dependencies
The dependent libraries used are:
- Emscripten

## Clone
For a new clone
```
git clone https://github.com/pmann84/CMakeAppTemplate.git
```

## Configure and Build
First do an out of source build by configuring the build scripts
```
cd CMakeAppTemplate
mkdir out
cd out
cmake -G "Visual Studio 16 2019" -A x64 -DCMAKE_BUILD_TYPE=Release -DBUILD_TESTS=ON ..
```
Then build
```
cd out 
cmake --build . --config Debug
```


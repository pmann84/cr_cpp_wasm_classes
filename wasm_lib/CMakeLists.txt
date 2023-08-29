set(WASM_PROJECT_NAME "${PROJECT_NAME}_Wasm_Lib")
message(STATUS "Setting up project for WASM Library ${WASM_PROJECT_NAME}")

add_executable(${WASM_PROJECT_NAME} bindings.cpp)

target_link_libraries(${WASM_PROJECT_NAME} PRIVATE ${PROJECT_NAME}_Lib)
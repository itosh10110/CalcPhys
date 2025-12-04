cmake_minimum_required(VERSION 3.30)

project(CalcFis)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(MY_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../..")
set(ANTLR_TAG "4.13.2")
set(ANTLR_EXECUTABLE "/usr/share/java/antlr-complete.jar")
set(ANTLR_INCLUDE_DIR "/usr/include/antlr4-runtime")

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/../cmake")

#list(APPEND CMAKE_MODULE_PATH "${MY_DIR}")
message(STATUS "MODULE : ${CMAKE_MODULE_PATH}")

file(GLOB SOURCES "*.cpp")
file(GLOB GFOURS "*.g4")

if (NOT EXISTS "${ANTLR_EXECUTABLE}")
	message(FATAL_ERROR "No se xd pudo encontrar ${ANTLR_EXECUTABLE}")
endif()

find_package(ANTLR REQUIRED)
message(STATUS "ANTLR Encontrado : ${ANTLR_VERSION}")

antlr_target(${PROJECT_NAME} ${GFOURS} LEXER PARSER VISITOR)
message(STATUS "ANTLR generado: ${ANTLR_${PROJECT_NAME}_CXX_OUTPUT_DIR}")

find_package(LLVM REQUIRED CONFIG)
message(STATUS "LLVM Encontrado ${LLVM_PACKAGE_VERSION}")
message(STATUS "Usando LLVMConfig.cmake ${LLVM_DIR}")

#${ANTLR_${PROJECT_NAME}_CXX_OUTPUT_DIR}
add_executable(${PROJECT_NAME} ${SOURCES} ${ANTLR_${PROJECT_NAME}_CXX_OUTPUTS})
target_link_libraries(${PROJECT_NAME} PRIVATE antlr4-runtime LLVM-21)
target_include_directories(
	${PROJECT_NAME} PRIVATE
	${ANTLR_INCLUDE_DIR}
	${CMAKE_BINARY_DIR}/antlr4cpp_generated_src
	${LLVM_INCLUDE_DIRS}
)
add_definitions(${LLVM_DEFINITIONS})
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_20)

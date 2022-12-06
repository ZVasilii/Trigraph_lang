cmake_minimum_required(VERSION 3.10)
project(trigraph_lang)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

message("Build Type: ${CMAKE_BUILD_TYPE}")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS_RELEASE "-O2")
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")

find_package(BISON REQUIRED)
find_package(FLEX REQUIRED)
find_package(LLVM REQUIRED)

set(grammarPath "${CMAKE_CURRENT_SOURCE_DIR}/parser")
set(driverPath "${CMAKE_CURRENT_SOURCE_DIR}/driver")
set(nodePath "${CMAKE_CURRENT_SOURCE_DIR}/node")

BISON_TARGET(parser ${grammarPath}/parser.y ${grammarPath}/parser.cc
             DEFINES_FILE ${grammarPath}/parser.hh)

message(STATUS "bison files generated in: ${BISON_parser_OUTPUTS}")

FLEX_TARGET(lexer ${grammarPath}/lexer.l  ${grammarPath}/lexer.cc)
message(STATUS "flex files generated in: ${FLEX_lexer_OUTPUTS}")

add_flex_bison_dependency(lexer parser)

add_executable( ${PROJECT_NAME}
    main.cc
    ${driverPath}/driver.cc
    ${nodePath}/node.cc
    ${FLEX_lexer_OUTPUTS}
    ${BISON_parser_OUTPUTS}
)

target_link_libraries(${PROJECT_NAME} LLVM)

target_include_directories( ${PROJECT_NAME}
    PUBLIC ${driverPath}
    PUBLIC ${grammarPath}
    PUBLIC ${nodePath}
    target_include_directories(${PROJECT_NAME} PRIVATE ${LLVM_INCLUDE_DIRS})
)

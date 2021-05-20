cmake_minimum_required(VERSION 3.2...3.16)

project(geometry)

set(CMAKE_CXX_STANDARD 17)
add_library(Lib_geom lib/Library.cpp lib/Library.h)

#GeometryaMOIA main executable
add_executable(geometry geometry.cpp)
target_include_directories(geometry PRIVATE lib)
target_link_libraries(geometry Lib_geom)
target_compile_options(Lib_geom PRIVATE -lm)
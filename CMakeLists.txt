cmake_minimum_required(VERSION 3.2...3.16)

project(geometry)

set(INCLUDE_FOLDERS 3rdparty lib)
set(CMAKE_CXX_STANDARD 17)
add_library(Lib_geom lib/Library.cpp lib/Library.h)
target_include_directories(Lib_geom PUBLIC ${INCLUDE_FOLDERS})

#GeometryaMOIA main executable
add_executable(geometry src/geometry.cpp)
target_include_directories(geometry PRIVATE lib)
target_link_libraries(geometry Lib_geom)
target_compile_options(Lib_geom PRIVATE -lm)

add_executable(GeomTest ${CMAKE_SOURCE_DIR}/tests/GeomTests.cpp ${CMAKE_SOURCE_DIR}/tests/GeomTests.h)
target_link_libraries(GeomTest Lib_geom)
target_include_directories(GeomTest PRIVATE src)


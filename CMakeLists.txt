cmake_minimum_required(VERSION 3.25)
project(spinlocks)

set(CMAKE_CXX_STANDARD 23)

find_package(benchmark CONFIG REQUIRED)

add_executable(spinlocks main.cpp)
target_link_libraries(spinlocks PRIVATE benchmark::benchmark benchmark::benchmark_main)


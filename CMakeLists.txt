cmake_minimum_required(VERSION 3.10.0)
project(C-DS-ALGOS VERSION 0.1.0 LANGUAGES C)

set(CMAKE_BUILD_TYPE Debug)

set(dir "src/Searching/")
set(source_files "${dir}main.c" "${dir}linearSearch.c" "${dir}/binarySearch.c" "${dir}/TwoPointerSearch.c")

add_executable(C-DS-ALGOS ${source_files})


cmake_minimum_required(VERSION 3.16)
project(1)

set(CMAKE_CXX_STANDARD 14)
#find_package(Boost 1.66.0 REQUIRED COMPONENTS
        #system)
find_library(BOOST_STACKTRACE_BACKTRACE_LIBRARY NAMES boost_stacktrace_backtrace)


add_executable(1 main.cpp)
#target_link_libraries(1 PRIVATE    ${Boost_LIBRARIES})
target_link_libraries(1 PRIVATE boost_stacktrace_backtrace backtrace dl)
#target_compile_options(1 PRIVATE -O3)
target_compile_options(1 PRIVATE -ffast-math)
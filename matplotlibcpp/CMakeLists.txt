cmake_minimum_required(VERSION 3.14)
project(plt)

# c++ 11
set(CMAKE_CXX_STANDARD 11)

add_executable(plt main.cpp)

# find python and numpy.
find_package(Python3 COMPONENTS Development NumPy)
target_include_directories(plt PRIVATE ${Python3_INCLUDE_DIRS} ${Python3_NumPy_INCLUDE_DIRS})
target_link_libraries(plt Python3::Python Python3::NumPy)

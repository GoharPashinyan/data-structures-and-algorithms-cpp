cmake_minimum_required(VERSION 3.16)

project(cpp_dsa_library)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(cpp_dsa_library
    main.cpp
    src/dsa/node.cpp
    src/dsa/binary_tree/binary_tree.cpp
    src/algorithms/tree/bfs.cpp
    src/algorithms/tree/dfs.cpp
)

target_include_directories(cpp_dsa_library PRIVATE
    include
)
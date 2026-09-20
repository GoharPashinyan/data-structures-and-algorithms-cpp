cmake_minimum_required(VERSION 3.16)

project(cpp_dsa_library)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(cpp_dsa_library
    main.cpp
    src/tree/node.cpp
    src/tree/binary_tree/binary_tree.cpp
	src/tree/binary_search_tree/bst.cpp
    src/algorithms/tree/bfs.cpp
    src/algorithms/tree/dfs.cpp
)

add_executable(list_test
    tests/linked_list/list_test.cpp
)

target_include_directories(cpp_dsa_library PRIVATE
    include
)

target_include_directories(list_test PRIVATE
    include
)

enable_testing()

add_test(
    NAME ListTest
    COMMAND list_test
)
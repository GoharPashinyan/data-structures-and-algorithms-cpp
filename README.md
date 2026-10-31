# C++ DSA Library

A C++ library providing implementations of fundamental data structures and algorithms using generic programming and modern C++ practices.

## Data Structures

### Binary Tree
- Binary Tree implementation
- Level-order insertion

### Binary Search Tree
- BST implementation
- Insertion and search operations

### Doubly Linked List
- Templated doubly linked list implementation
- Bidirectional and const iterators
- Element access, insertion and removal operations
- Copy and move semantics
- Rule of Five implementation

## Algorithms

- Insertion Sort
- Tree Traversal (BFS, DFS)

## Project Structure

```text
cpp-dsa-library/
│
├── include/
│   ├── algorithms/
│   │   ├── sorting/
│   │   │   └── insertion_sort.h
│   │   └── tree/
│   │       ├── bfs.h
│   │       └── dfs.h
│   │
│   ├── linked_list/
│   │   ├── linked_list.h
│   │   └── node.h
│   │
│   └── tree/
│       ├── node.h
│       ├── binary_tree/
│       │   └── binary_tree.h
│       └── binary_search_tree/
│           └── bst.h
│
├── src/
│   ├── algorithms/
│   │   └── tree/
│   │       ├── bfs.cpp
│   │       └── dfs.cpp
│   │
│   └── tree/
│       ├── node.cpp
│       ├── binary_tree/
│       │   └── binary_tree.cpp
│       └── binary_search_tree/
│           └── bst.cpp
│
├── tests/
│   ├── algorithms/
│   │   └── insertion_sort_test.cpp
│   └── linked_list/
│       └── list_test.cpp
│
├── main.cpp
├── CMakeLists.txt
├── README.md
└── .gitignore
```

## Build

The project uses CMake as its build system.

```bash
cmake --build build
```

## Run Tests

```bash
ctest --test-dir build --output-on-failure
```
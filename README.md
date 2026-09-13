# C++ DSA Library

A collection of data structures and algorithms implemented in C++.

## Goals

- Practice C++ and STL
- Implement common data structures from scratch
- Study algorithms and their time complexity
- Improve problem-solving and DSA skills
- Build a structured and reusable C++ project

## Current Features

### Binary Tree

- Node
- Binary Tree
- Level-order insertion
- BFS traversal
- DFS traversals
  - Preorder
  - Inorder
  - Postorder

## Project Structure

```text
include/
└── dsa/
    ├── tree/
    │   ├── node.h
    │   └── binary_tree/
    │       └── binary_tree.h
    │
    └── algorithms/
        └── tree/
            ├── bfs.h
            └── dfs.h

src/
└── dsa/
    ├── node.cpp
    ├── binary_tree/
    │   └── binary_tree.cpp
    └── algorithms/
        └── tree/
            ├── bfs.cpp
            └── dfs.cpp
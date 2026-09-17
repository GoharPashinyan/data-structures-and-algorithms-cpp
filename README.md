# C++ DSA Library

A C++ project for implementing and studying data structures and algorithms.

## Goals

* Practice C++ and STL
* Implement common data structures from scratch
* Study algorithms and their time complexity
* Improve problem-solving and DSA skills
* Build a structured and reusable C++ project

## Current Features

### Binary Tree

* `TreeNode`
* Binary Tree
* Level-order insertion
* BFS traversal
* DFS traversals

  * Preorder
  * Inorder
  * Postorder

### Binary Search Tree

* `TreeNode`
* BST insertion
* BST search

### Doubly Linked List

* `LinkedNode<T>`
* `LinkedList<T>`
* `empty()`
* `size()`
* `front()`
* `back()`
* `push_front()`
* `push_back()`
* `pop_front()`
* `pop_back()`
* `clear()`
* Destructor

## Project Structure

```text
cpp-dsa-library/
│
├── include/
│   ├── algorithms/
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
│       │
│       ├── binary_tree/
│       │   └── binary_tree.h
│       │
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
│       │
│       ├── binary_tree/
│       │   └── binary_tree.cpp
│       │
│       └── binary_search_tree/
│           └── bst.cpp
│
├── main.cpp
├── CMakeLists.txt
├── README.md
└── .gitignore
```

## Build

The project uses CMake to configure the build.

```bash
cmake --build build
```

The executable is generated inside the `build/` directory.

#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include "dsa/tree/node.h"

class BinaryTree
{
private:
	Node *root;

public:
	//ctor
	BinaryTree();
	
	//getter
	Node *getRoot() const;

	void insert(int value);
};

#endif
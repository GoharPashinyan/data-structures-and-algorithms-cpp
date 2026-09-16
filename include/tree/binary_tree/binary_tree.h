#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include "tree/node.h"

class BinaryTree
{
private:
	TreeNode *root;

public:
	//ctor
	BinaryTree();
	
	//getter
	TreeNode *getRoot() const;

	void insert(int value);
};

#endif
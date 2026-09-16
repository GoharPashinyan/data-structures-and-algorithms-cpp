#pragma once

#include "tree/node.h"

class BST
{
	private:
	TreeNode *root;

	public:
	//ctor
	BST();

	//getter
	const TreeNode* getRoot() const;

	
	void insert(int value); 
	bool search(const int value) const;
};
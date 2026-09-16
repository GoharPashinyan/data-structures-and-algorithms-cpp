#ifndef NODE_H
#define NODE_H

class TreeNode
{	int data;
	TreeNode *left;
	TreeNode *right;

	friend class BinaryTree;
	friend class BST;

	public:
	//ctor
	TreeNode(int value);

	//getter
	int getData() const;
	TreeNode* getLeft() const;
	TreeNode* getRight() const;
};
#endif
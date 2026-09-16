#include "tree/node.h"

TreeNode::TreeNode(int value)
{
	data = value;
	left = nullptr;
	right = nullptr;
}

int TreeNode::getData() const
{
	return data;
}

TreeNode *TreeNode::getLeft() const
{
	return left;
}

TreeNode *TreeNode::getRight() const
{
	return right;
}
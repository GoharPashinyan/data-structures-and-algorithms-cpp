#include "dsa/tree/binary_tree/binary_tree.h"
#include <queue>

//ctor implementation
BinaryTree::BinaryTree()
{
	root = nullptr;
}

//getter
Node* BinaryTree::getRoot() const
{
	return root;
}

//insert
void BinaryTree::insert(int value)
{
	Node *newNode = new Node(value);
	if(root == nullptr)
	{
		root = newNode;
		return;
	}

	std::queue<Node*> q;
	q.push(root);

	while(!q.empty())
	{
		Node *current = q.front();
		q.pop();
		if(current->left == nullptr)
		{
			current->left = newNode;
			return;
		}

		q.push(current->left);

		if(current->right == nullptr)
		{
			current->right = newNode;
			return;
		}

		q.push(current->right);
	}
}
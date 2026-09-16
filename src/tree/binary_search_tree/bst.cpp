
#include "tree/node.h"
#include "tree/binary_search_tree/bst.h"

//ctor
BST::BST()
{
	root = nullptr;
}

//getter
 const TreeNode* BST::getRoot() const
{
	return root;
}

void BST::insert(int value)
{
	TreeNode *newNode = new TreeNode(value);
	if(root == nullptr)
	{
		root = newNode;
		return;
	}

	TreeNode *current = root;
	while(current != nullptr)
	{
		if(current->data > value)
		{
			if(current->left == nullptr)
			{
				current->left = newNode;
				return;
			}

			current = current->left;
		}
		else{
			if(current->right == nullptr)
			{
				current->right = newNode;
				return;
			}
			
			current = current->right;
		}
	}
}

bool BST::search(const int value) const
{
	TreeNode *current = root;
	while(current !=  nullptr)
	{
		if(current->data == value)
		{
			return true;
		}
		if(current->data > value)
		{
			current = current->left;
		}
		else if(current->data < value)
		{
			current = current->right;
		}
	}
	return false;
}
#include <vector>

#include "dsa/algorithms/tree/dfs.h"

namespace tree
{
	namespace
	{
		void preOrderHelper(const Node* root, std::vector<int>& result)
		{
			if(root == nullptr)
				return;

			result.push_back(root->getData());

			preOrderHelper(root->getLeft(), result);
			preOrderHelper(root->getRight(), result);

		}

		void inOrderHelper(const Node* root, std::vector<int>& result)
		{
			if(!root)
				return;

			inOrderHelper(root->getLeft(), result);
			result.push_back(root->getData());
			inOrderHelper(root->getRight(), result);
		}

		void postOrderHelper(const Node* root, std::vector<int>& result)
		{
			if(!root)
				return;

			postOrderHelper(root->getLeft(), result);
			postOrderHelper(root->getRight(), result);
			result.push_back(root->getData());
		}
	}
	
	std::vector<int> preOrder(const Node *root)
	{
		std::vector<int> result;
		preOrderHelper(root, result);

		return result;
	}

	std::vector<int> inOrder(const Node* root)
	{
		std::vector<int> result;
		inOrderHelper(root, result);

		return result;
	}

	std::vector<int> postOrder(const Node* root)
	{
		std::vector<int> result;
		postOrderHelper(root, result);

		return result;
	}
}
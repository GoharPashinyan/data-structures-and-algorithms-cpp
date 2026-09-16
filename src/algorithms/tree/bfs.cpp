#include "algorithms/tree/bfs.h"

#include <queue>

namespace tree
{
	std::vector<int> bfs(const TreeNode* root)
	{
		std::vector<int> result;

		if(root == nullptr)
			return result;

		std::queue<const TreeNode*> q;
		q.push(root);
		while(!q.empty())
		{
			const TreeNode* current = q.front();
			q.pop();

			result.push_back(current->getData());

			if(current->getLeft() != nullptr)
			{
				q.push(current->getLeft());
			}
			if(current->getRight() != nullptr)
			{
				q.push(current->getRight());
			}
		}
		return result;
	}
}
#include "dsa/algorithms/tree/bfs.h"

#include <queue>

namespace tree
{
	std::vector<int> bfs(const Node* root)
	{
		std::vector<int> result;

		if(root == nullptr)
			return result;

		std::queue<const Node*> q;
		q.push(root);
		while(!q.empty())
		{
			const Node* current = q.front();
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
#pragma once
#include <vector>

#include "tree/node.h"

namespace tree
{
	std::vector<int> preOrder(const TreeNode* root);
	std::vector<int> inOrder(const TreeNode* root);
	std::vector<int> postOrder(const TreeNode* root);
}
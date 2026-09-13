#pragma once
#include <vector>

#include "dsa/tree/node.h"

namespace tree
{
	std::vector<int> preOrder(const Node* root);
	std::vector<int> inOrder(const Node* root);
	std::vector<int> postOrder(const Node* root);
}
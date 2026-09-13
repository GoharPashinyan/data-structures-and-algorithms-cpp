#include <iostream>
#include <vector>

#include "include/dsa/tree/binary_tree/binary_tree.h"
#include "include/dsa/algorithms/tree/bfs.h"
#include "include/dsa/algorithms/tree/dfs.h"

int main()
{
	BinaryTree tree;
	tree.insert(10);
	tree.insert(20);
	tree.insert(30);
	tree.insert(40);
	tree.insert(50);

	std::vector<int> arr = tree::bfs(tree.getRoot());

	std::vector<int> inorder = tree::postOrder(tree.getRoot());

	for(int x:inorder)  
	{
		std::cout << x << " ";
	}

	std::cout << "helllo binary tree";

	return 0;
}
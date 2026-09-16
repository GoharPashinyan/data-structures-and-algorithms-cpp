#include <iostream>
#include <vector>

#include "include/tree/binary_tree/binary_tree.h"
#include "include/tree/binary_search_tree/bst.h"
#include "include/algorithms/tree/bfs.h"
#include "include/algorithms/tree/dfs.h"

#include "include/linked_list/linked_list.h"


int main()
{
	std::cout <<"binary_tree" <<std::endl;

	BinaryTree tree;
	tree.insert(10);
	tree.insert(20);
	tree.insert(30);
	tree.insert(40);
	tree.insert(50);

	std::vector<int> arr = tree::bfs(tree.getRoot());

	std::vector<int> inorderBT = tree::postOrder(tree.getRoot());

	for(int x:inorderBT)  
	{
		std::cout << x << " ";
	}

	std::cout << std::endl << "BST";

	BST bst;
	bst.insert(10);
	bst.insert(5);
	bst.insert(20);
	bst.insert(7);
	bst.insert(3);

	std::vector<int> inorderBST = tree::inOrder(bst.getRoot());

	for(int x: inorderBST)
	{
		std::cout << x << "   ";
	}

	std::cout << std::endl << bst.search(8) << std::endl;

	std::cout << "Linked List" <<std::endl;

	LinkedList<int> list;
	list.push_back(20);
	list.push_front(10);
	std::cout << list.size() << " " << list.front() << "  " << std::endl;
	
	
	return 0;
}
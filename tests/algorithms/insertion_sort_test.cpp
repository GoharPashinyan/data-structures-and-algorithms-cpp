#include <iostream>
#include <cassert>

#include "linked_list/linked_list.h"
#include "algorithms/sorting/insertion_sort.h"

int main()
{
	LinkedList<int> list;
	list.push_back(3);
	list.push_back(1);
	list.push_back(2);

	insertionSort(list.begin(), list.end());
	
	assert(list.front() == 1);
	assert(list.back() == 3);

	return 0;
}
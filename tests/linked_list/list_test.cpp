#include <cassert>
#include <utility>
#include "linked_list/linked_list.h"

int main()
{	
	//test member functions
	LinkedList<int> list;

	assert(list.empty());
	assert(list.size() == 0);

	list.push_back(10);
    list.push_back(20);
    list.push_front(5);

    assert(list.size() == 3);
    assert(list.front() == 5);
    assert(list.back() == 20);

	list.pop_front();

    assert(list.front() == 10);
    assert(list.size() == 2);

    list.pop_back();

    assert(list.back() == 10);
    assert(list.size() == 1);

    list.clear();

    assert(list.empty());
    assert(list.size() == 0);

	//test deep copy
	LinkedList<int> list1;

    list1.push_back(10);
    list1.push_back(20);
    list1.push_back(30);

    LinkedList<int> list2 = list1;

    assert(list2.size() == 3);
    assert(list2.front() == 10);
    assert(list2.back() == 30);

	list2.pop_front();

    assert(list1.front() == 10);
    assert(list2.front() == 20);

	//test copy assignment
	list2 = list1;
	assert(list2.size() == 3);
    assert(list2.front() == 10);

	//test move ctor
	LinkedList<int> list3 = std::move(list1);

	assert(list3.size() == 3);
    assert(list3.front() == 10);
    assert(list3.back() == 30);

	//test move asignment
	LinkedList<int> list4;

	list4.push_back(100);
	list4.push_back(200);

	list4 = std::move(list3);

	assert(list4.size() == 3);
    assert(list4.front() == 10);
    assert(list4.back() == 30);

	assert(list1.empty());
	assert(list1.size() == 0);

    return 0;
}
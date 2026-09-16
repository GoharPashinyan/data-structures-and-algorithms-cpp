#pragma once

#include "linked_list/node.h"

template <typename T>
class LinkedList
{
	LinkedNode<T>* head;
	LinkedNode<T>* tail;
	
	std::size_t count;

	public:
	//ctor
	LinkedList();

	//dtor
	~LinkedList();

	bool empty() const;
	std::size_t size() const;

	T& front();
	const T& front() const;

	T& back();
	const T& back() const;

	void push_front(const T& value);
	void push_back(const T& value);

	void pop_front();
	void pop_back();

	void clear();

};

template <typename T>
LinkedList<T>::LinkedList()
{
	head = nullptr;
	tail = nullptr;
	count = 0;
}

template <typename T>
LinkedList<T>::~LinkedList()
{
	clear();
}

template <typename T>
bool LinkedList<T>::empty() const
{
	return count == 0;
}

template <typename T>
std::size_t LinkedList<T>::size() const
{
	return count;
}

template <typename T>
T& LinkedList<T>::front()
{
	return head->getData();
}

template<typename T>
const T& LinkedList<T>::front() const
{
	return head->getData();
}

template <typename T>
T& LinkedList<T>::back()
{
	return tail->getData();
}

template<typename T>
const T& LinkedList<T>::back() const
{
	return tail->getData();
}

template<typename T>
void LinkedList<T>::push_front(const T& value)
{
	LinkedNode<T>* newNode = new LinkedNode(value);
	if(empty())
	{
		head = newNode;
		tail = newNode;
	}
	else
	{
		newNode->setNext(head);
		head->setPrev(newNode);
		head = newNode;
	}
	count++;
}

template<typename T>
void LinkedList<T>::push_back(const T& value)
{
	LinkedNode<T>* newNode = new LinkedNode(value);
	if(empty())
	{
		head = newNode;
		tail = newNode;
	}
	else
	{
		newNode->setPrev(tail);
		tail->setNext(newNode);
		tail = newNode;
	}
	count++;
}

template <typename T>
void LinkedList<T>::pop_front()
{
	if(empty())
	{
		return;
	}
	
	LinkedNode<T>* oldHead = head;
	if(size() == 1)
	{
		head = nullptr;
		tail = nullptr;
	}
	else
	{
		head = head->getNext();
		head->setPrev(nullptr);
	}
	delete oldHead;
	count--;
}

template <typename T>
void LinkedList<T>::pop_back()
{
	if(empty())
	{
		return;
	}
	
	LinkedNode<T>* oldTail = tail;
	if(size() == 1)
	{
		head = nullptr;
		tail = nullptr;
	}
	else
	{
		tail = tail->getPrev();
		tail->setNext(nullptr);
	}
	delete oldTail;
	--count;
}

template <typename T>
void LinkedList<T>::clear()
{
	while(head != nullptr)
	{
		LinkedNode<T>* oldNode = head;
		head = head->getNext();

		delete  oldNode;
	}

	tail = nullptr;
	count = 0;
}

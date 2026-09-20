#pragma once

#include "linked_list/node.h"

template <typename T>
class LinkedList
{
	LinkedNode<T>* m_head;
	LinkedNode<T>* m_tail;
	
	std::size_t m_count;

	public:
	//ctor
	LinkedList();
	LinkedList(const LinkedList& other);
	LinkedList(LinkedList&& other);

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

	//operators
	LinkedList<T>& operator=(const LinkedList<T>& other);
	LinkedList<T>& operator=(LinkedList<T> &&other);
};

template <typename T>
LinkedList<T>::LinkedList()
{
	m_head = nullptr;
	m_tail = nullptr;
	m_count = 0;
}

template <typename T>
LinkedList<T>::LinkedList(const LinkedList<T>& other)
{
	m_head = nullptr;
	m_tail = nullptr;
	m_count = 0;

	LinkedNode<T> *current = other.m_head;
	while(current != nullptr)
	{
		push_back(current->getData());
		current = current->getNext();
	}
}

template <typename T>
LinkedList<T>::LinkedList(LinkedList<T> &&other)
{
	m_head = other.m_head;
	m_tail = other.m_tail;
	m_count = other.m_count;

	other.m_head = nullptr;
	other.m_tail = nullptr;
	other.m_count = 0;
}

template <typename T>
LinkedList<T>::~LinkedList()
{
	clear();
}

template <typename T>
bool LinkedList<T>::empty() const
{
	return m_count == 0;
}

template <typename T>
std::size_t LinkedList<T>::size() const
{
	return m_count;
}

template <typename T>
T& LinkedList<T>::front()
{
	return m_head->getData();
}

template<typename T>
const T& LinkedList<T>::front() const
{
	return m_head->getData();
}

template <typename T>
T& LinkedList<T>::back()
{
	return m_tail->getData();
}

template<typename T>
const T& LinkedList<T>::back() const
{
	return m_tail->getData();
}

template<typename T>
void LinkedList<T>::push_front(const T& value)
{
	LinkedNode<T>* newNode = new LinkedNode(value);
	if(empty())
	{
		m_head = newNode;
		m_tail = newNode;
	}
	else
	{
		newNode->setNext(m_head);
		m_head->setPrev(newNode);
		m_head = newNode;
	}
	m_count++;
}

template<typename T>
void LinkedList<T>::push_back(const T& value)
{
	LinkedNode<T>* newNode = new LinkedNode(value);
	if(empty())
	{
		m_head = newNode;
		m_tail = newNode;
	}
	else
	{
		newNode->setPrev(m_tail);
		m_tail->setNext(newNode);
		m_tail = newNode;
	}
	m_count++;
}

template <typename T>
void LinkedList<T>::pop_front()
{
	if(empty())
	{
		return;
	}
	
	LinkedNode<T>* oldHead = m_head;
	if(size() == 1)
	{
		m_head = nullptr;
		m_tail = nullptr;
	}
	else
	{
		m_head = m_head->getNext();
		m_head->setPrev(nullptr);
	}
	delete oldHead;
	m_count--;
}

template <typename T>
void LinkedList<T>::pop_back()
{
	if(empty())
	{
		return;
	}
	
	LinkedNode<T>* oldTail = m_tail;
	if(size() == 1)
	{
		m_head = nullptr;
		m_tail = nullptr;
	}
	else
	{
		m_tail = m_tail->getPrev();
		m_tail->setNext(nullptr);
	}
	delete oldTail;
	--m_count;
}

template <typename T>
void LinkedList<T>::clear()
{
	while(m_head != nullptr)
	{
		LinkedNode<T>* oldNode = m_head;
		m_head = m_head->getNext();

		delete  oldNode;
	}

	m_tail = nullptr;
	m_count = 0;
}

template <typename T>
LinkedList<T>& LinkedList<T>::operator=(const LinkedList<T>& other)
{
	if(this == &other)
	{
		return *this;
	}
	clear();
	LinkedNode<T>* current = other.m_head;

	while (current != nullptr)
	{
		push_back(current->getData());
		current = current->getNext();
	}
	return *this;
}

template <typename T>
LinkedList<T>& LinkedList<T>::operator=(LinkedList<T> &&other)
{
	if(this == &other)
	{
		return *this;
	}
	clear();
	m_head = other.m_head;
	m_tail = other.m_tail;
	m_count = other.m_count;

	other.m_head = nullptr;
	other.m_tail = nullptr;
	other.m_count = 0;

	return *this;
}
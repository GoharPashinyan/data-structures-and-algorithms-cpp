#pragma once

template <typename T>
class LinkedNode
{
	private:
	T data;
	LinkedNode * next;
	LinkedNode *prev;
	public:
	//ctor
	LinkedNode(T value);

	//getter
	T& getData();
	const T& getData() const;

	LinkedNode *getNext() const;
	LinkedNode *getPrev() const;

	//setter
	void setNext(LinkedNode *node);
	void setPrev(LinkedNode *node);
};

template <typename T>
LinkedNode<T>::LinkedNode(T value)
{
	data = value;
	next = nullptr;
	prev = nullptr;
}

template <typename T>
T& LinkedNode<T>::getData()
{
	return data;
}

template <typename T>
const T& LinkedNode<T>::getData() const
{
	return data;
}

template <typename T>
LinkedNode<T>* LinkedNode<T>::getNext() const
{
	return next;
}

template <typename T>
LinkedNode<T>* LinkedNode<T>::getPrev() const
{
	return prev;
}


template <typename T>
void LinkedNode<T>::setNext(LinkedNode<T>* node)
{
	next = node;
}

template <typename T>
void LinkedNode<T>::setPrev(LinkedNode<T>* node)
{
	prev = node;
}
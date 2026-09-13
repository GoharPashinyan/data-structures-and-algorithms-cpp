#include "dsa/tree/node.h"

Node::Node(int value)
{
	data = value;
	left = nullptr;
	right = nullptr;
}

int Node::getData() const
{
	return data;
}

Node* Node::getLeft() const
{
	return left;
}

Node* Node::getRight() const
{
	return right;
}
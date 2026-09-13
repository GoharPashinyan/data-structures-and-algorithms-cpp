#ifndef NODE_H
#define NODE_H

class Node
{
	
	int data;
	Node *left;
	Node *right;
	friend class BinaryTree;
public:
	Node(int value);
	int getData() const;
	Node* getLeft() const;
	Node* getRight() const;
};

#endif

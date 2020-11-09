#include"node.h"

Node::Node()
{
	data = 'A';
	next = NULL;
}
void Node::setData(char ch)
{
	data = ch;
}
void Node::setNext(Node *next)
{
	this->next = next;
}
char Node::getData()
{
	return data;
}
Node* Node::getNext()
{
	return next;
}
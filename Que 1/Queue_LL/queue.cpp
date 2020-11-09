#include"queue.h"

Queue::Queue()
{
	rear = front = NULL;
}
Node* Queue::creareNode(char ch)
{
	Node *record;
	record = new Node();
	record->setData(ch);
	record->setNext(NULL);
	return record;
}
int Queue::IsEmpty()
{
	if (front == NULL)
		return 1;
	else 
		return 0;
}
void Queue::EnQueue(char ch)
{
	Node *newnode;
	newnode = creareNode(ch);
	if (rear == NULL)
	{
		rear =front= newnode;
	}
	else
	{
		rear->setNext(newnode);
		rear = newnode;
	}
}
char Queue::DeQueue()
{
	char ele = -9999;
	Node *del;
	if (!IsEmpty())
	{
		del = front;
		front = front->getNext();
		ele = del->getData();
		delete del;
	}
	return ele;
}
void Queue::display()
{
	Node *move;
	move = front;
	while (move != NULL)
	{
		cout << "\n\t" << move->getData();
		move = move->getNext();
	}
	
}
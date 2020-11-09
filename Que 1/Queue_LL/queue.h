#include"node.h"

class Queue
{
	Node *rear, *front;
	Node *creareNode(char);
public:
	Queue();
	int IsEmpty();
	void EnQueue(char);
	char DeQueue();
	void display();
};

#include"emp.h"

class Queue
{
	int size, rear, front;
	Employee *arr;
public:
	Queue();
	int IsFull();
	int IsEmpty();
	void Enqueue(Employee);
	Employee Dequeue();
	void display();
};

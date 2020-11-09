#include"queue.h"

Queue::Queue()
{
	size = 3;
	rear = front = -1;
	arr = new Employee[size];
}
//Queue::Queue(int s)
//{
//	size = s;
//	rear = front = -1;
//	arr = new int[size];
//}
int Queue::IsFull()
{
	if (rear == size - 1)
		return 1;
	else
		return 0;
}
int Queue::IsEmpty()
{
	if (front==rear)
		return 1;
	else
		return 0;
}
void Queue::Enqueue(Employee ele)
{
	if (!IsFull())
	{
		rear++;
		arr[rear] = ele;
	}
	else
	{
		cout << "\n\tQueue is full!!!";
	}
}
Employee Queue::Dequeue()
{
	Employee ele;
	if (!IsEmpty())
	{
		front++;
		ele = arr[front];
	}
	return ele;
}
void Queue::display()
{
	for (int i = front+1; i <= rear; i++)
	{
		cout << "\n\t" << arr[i];
	}
}
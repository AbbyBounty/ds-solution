#include"stack.h"

cStack::cStack()
{
	size = 2;
	arr = new int[size];
	top = -1;
}
cStack::cStack(int s)
{
	size = s;
	arr = new int[size];
	top = -1;
}
int cStack::isFull()
{
	if (top == size - 1)
		return 1;
	else
		return 0;
}
void cStack::push(int ele)
{
	if (!isFull())
	{
		top++;
		arr[top] = ele;
	}
	else
	{
		cout << "\n\tStack is Full";
	}
}
int cStack::isEmpty()
{
	if (top == -1)
		return 1;
	else
		return 0;
}
int cStack::pop()
{
	int ele = ERROR;
	if (!isEmpty())
	{
		ele = arr[top];
		top--;
	}
	return ele;
}
int cStack::peek()
{
	return arr[top];
}
void cStack::display()
{
	for (int i = top; i >= 0; i--)
	{
		cout << "\n\t" << arr[i];
	}
}
  
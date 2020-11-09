#include"stack.h"

CStack::CStack()
{
	size = 2;
	arr = new char[size];
	top = -1;
}
CStack::CStack(int s)
{
	size = s;
	arr = new char[size];
	top = -1;
}
char CStack::isFull()
{
	if (top == size - 1)
		return 1;
	else
		return 0;
}
void CStack::push(char ele)
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
char CStack::isEmpty()
{
	if (top == -1)
		return 1;
	else
		return 0;
}
char CStack::pop()
{
	char ele = ERROR;
	if (!isEmpty())
	{
		ele = arr[top];
		top--;
	}
	return ele;
}
char CStack::peek()
{
	return arr[top];
}
void CStack::display()
{
	for (int i = top; i >= 0; i--)
	{
		cout << "\n\t" << arr[i];
	}
}

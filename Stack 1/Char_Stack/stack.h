#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#define ERROR -9999

class CStack
{
	int size, top;
	char *arr;
public:
	CStack();
	CStack(int);
	void push(char);
	char pop();
	char isFull();
	char isEmpty();
	char peek();
	void display();
};

#pragma once
#include<iostream>
using namespace std;
#define ERROR -9999
#ifndef S_
#define S_

class cStack
{
	int size, top;
	int *arr;
public:
	cStack();
	cStack(int);
	void push(int);
	int pop();
	int isFull();
	int isEmpty();
	int peek();
	void display();
};
#endif // !S_

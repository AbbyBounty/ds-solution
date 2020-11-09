#include<iostream>
using namespace std;
//#define ERROR -9999
class Node
{
	char data;
	Node *next;
public:
	Node();
	void setData(char);
	void setNext(Node*);
	char getData();
	Node *getNext();
};

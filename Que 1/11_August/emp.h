#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#define ERROR -9999

class Employee
{
	int id;
	char name[20];
public:
	Employee();
	Employee(int, const char*);
	void display();
	friend istream& operator>>(istream&,Employee&);
	friend ostream& operator<<(ostream&, Employee&);
};

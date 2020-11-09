#include"emp.h"

Employee::Employee()
{
	id = 1;
	strcpy(name, " ");
}
Employee::Employee(int i, const char*nm)
{
	id = i;
	strcpy(name, nm);
}
void Employee::display()
{
	cout << "\n\tId Is:\t" << id;
	cout << "\n\tName Is:" << name;
}
ostream& operator<<(ostream &out, Employee &e)
{
	out << "\n\t" << e.id;
	out << "\n\t"<< e.name;
	return out;
}
istream& operator>>(istream &in, Employee &e)
{
	cout << "\n\t Enter Id: ";
	in >> e.id ;
	cout << "\n\t Enter Name: ";
	in >> e.name;
	return in;
}
#include"stack.h"
#include<conio.h>

int main()
{
	CStack s;
	int choice;
	char ch;
	do
	{
		cout << "\n\n\t1.Push\
              \n\t2.Pop\
              \n\t3.Peek\
              \n\t4.Display\
               \n\tEnter Your choice:";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "\n\tEnter Character:";
			cin >> ch;
			s.push(ch);
			break;
		case 2:
			ch = s.pop();
			if (ch == ERROR)
			{
				cout << "\n\tStack Is Empty";
			}
			else
			{
				cout << "\n\tDeleted Character is:" << ch;
			}
			break;
		case 3:
			ch = s.peek();
			cout << "\n\tTop Element is:" << ch;
			break;
		case 4:
			s.display();
			break;
		default:
			break;
		}
	} while (choice != 0);
	_getch();
}
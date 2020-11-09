#include"stack.h"
#include<conio.h>

int main()
{
	cStack s;
	int choice,data;
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
			cout << "\n\tEnter Data:";
			cin >> data;
			s.push(data);
			break;
		case 2:
			data = s.pop();
			if (data==ERROR)
			{
				cout << "\n\tStack Is Empty";
			}
			else
			{
				cout << "\n\tDeleted data is:" << data;
			}
			break;
		case 3:
			data = s.peek();
			cout << "\n\tTop Element is:" << data;
			break;
		case 4:
			s.display();
			break;
		default:
			break;
		}
	}while (choice != 0);
	_getch();
}
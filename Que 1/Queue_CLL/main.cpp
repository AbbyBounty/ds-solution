#include"queue.h"
#include<conio.h>

int main()
{
	Queue q;
	int ch;
	char ele;

	do
	{
		cout << "\n\n\t1.EnQueue\
                 \n\t2.DeQueue\
                  \n\t3.Display\
                  \n\tEnter choice:";
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "\n\tEnter element:";
			cin >> ele;
			q.EnQueue(ele);
			break;
		case 2:
			ele = q.DeQueue();
			if (ele == -9999)
			{
				cout << "\n\tQueue is Empty!!!";
			}
			else
				cout << "\n\tDeleted Element is:" << ele;
			break;
		case 3:
			q.display();
			break;
		}
	} while (ch != 0);

	_getch();
}
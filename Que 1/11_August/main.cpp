#include"queue.h"
#include<conio.h>

int main()
{
	Queue q;
	Employee ele;
	int ch;
	do
	{
		cout << "\n\n\t1.Enqueue\
                  \n\t2.Dequeue\
                  \n\t3.Display\
                  \n\t0.Exit\
                  \n\tEnter choice:";
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "\n\tEnter Element:";
			cin >> ele;
			q.Enqueue(ele);
			break;
		case 2:
			ele = q.Dequeue();
			cout << "\n\tDeleted Element is:" << ele;
			break;
		case 3:
			q.display();
			break;
		}
	} while (ch != 0);

	_getch();

}
#include"stack.h"
#include<conio.h>

int main()
{
	char infix[20];
	int res;;
	cout << "\n\n\t Enter Infix Expression:";
	cin >> infix;
	res = Postfix_Eva(infix);
	cout << "\n\n\t PostFix : " << res;

	_getch();

}
#include<iostream>
using namespace std;
int main()
{
	float a,b;
	char op;
	cout << "enter a floating number:";
	cin >> a;
	cout << "Enter an operator:";
	cin >> op ;
	cout << "Enter a floating point number :";
	cin >> b;
	switch(op)
	{
		case '+':
			cout << a+b << endl;
			break;
			case '-':
			cout << a-b << endl;
			break;
			case '*':
			cout << a*b << endl;
			break;
			case '/':
			cout << a/b << endl;
			break;
			deafult:
				cout << "Invalid number ";
	}
	return 0;
	}

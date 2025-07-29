#include<iostream>
using namespace std;
void cal(int a,int b,char op);
int main()
{
	int x,y;
	char c;
	cout << " Enter the first number,operator and second number:";
	cin >> x >> c >> y;
	cal(x,y,z);
 	return 0;
}
void cal(int a,int b,char op)
{
	switch(op)
	{
		case '+':
			cout << a << "+" << b <<"=" << a+b;
			break;
			case '-':
			cout << a << "-" << b <<"=" << a-b;
			break;
			case '*':
			cout << a << "*" << b <<"=" << a*b;
			break;
			case '/':
			cout << a << "/" << b <<"=" << a/b;
			break;
			default :
				cout << "Invalid choice !";
}
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


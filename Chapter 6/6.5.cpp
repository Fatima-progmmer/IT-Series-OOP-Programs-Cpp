#include<iostream>
using namespace std;
int main()
{
	int n,c;
	c=1;
	cout << "Enter a number :";
	cin >> n;
	while(c<=10)
	{
		cout << n << "*" << c << "=" << n*c << endl;
		c=c+1;
	}
}return 0;

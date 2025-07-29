#include<iostream>
using namespace std;
int main()
{
	long int c,n,t;
	c=1;
	t=1;
	cout << "Enter a number :";
	cin >> n;
	while(c<=n)
	{
		t=t*c;
		c=c+1;
	}
	cout << "Factorial of " << n << " is " << f;
	return 0;
}

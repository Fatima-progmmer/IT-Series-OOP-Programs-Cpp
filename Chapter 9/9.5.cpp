#include<iostream>
using namespace std;
void factor(int n);
int main()
{
	int num;
	cout << "Enter a number:";
	cin >> num;
	factor(num);
 	return 0;
}

void factor(int n);
{
	int i;
	long fact;
	fact=1;
	for(i=1;i<=n;i++)
	fact*=i;
	cout << "Factorial of " << n << "is " fact;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


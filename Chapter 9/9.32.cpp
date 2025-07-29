#include<iostream>
using namespace std;

long int fact(int n)
{
	if(n==0)
	return 1;
	else
	return n*fact(n-1);
}
int main()
{
	int num;
	cout << "Enter an integer:";
	cin >> num;
	cout << "Factorial of " << num << " is " << fact(num);
  	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


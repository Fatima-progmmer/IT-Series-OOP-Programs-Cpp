#include<iostream>
using namespace std;
int power(int x,int n)
{
	if(n<=0)
	return 1;
	else if(n==1)
	return x;
	else
	return x*power(x,n-1);
}
int main()
{
	int a,b;
	cout << "Enter Two integers:";
	cin >> a >> b;
	cout << a << "^" << b << "=" << power(a,b);
	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


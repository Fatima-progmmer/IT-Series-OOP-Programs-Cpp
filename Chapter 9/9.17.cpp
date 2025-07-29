#include<iostream>
using namespace std;
void fun();
int main()
{
	for(int i=1;i<=5;i++)
	fun();
 	return 0;
}

vpoid fun()
{
	static int n=0;
	n++;
	cout << "values of n=" << n << endl;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


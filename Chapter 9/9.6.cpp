#include<iostream>
using namespace std;
void chk_number(int n)
{
	int c=0;
	for(int i=0;i<n ;i++)
	{
		if(n%i==0)
		c=1;
	}
	if(n%2==0 && c==0)
	cout << n << " is a orime even number :";
	else if(n%2!=0 && c==0)
	cout << n << " is a odd number .";
	else if(n%2!=0 && c!=0)
	cout << n << " is not an even number ,not prime ";
	else
	cout << n << " is not a prime number:"
}
int main()
{
	int n;
	cout << "Enter a number :";
	cin >> n;
	cout << "Nature of the number is that \n";
	cout << "\n-------------------------------" << endl;
	chk_number();
	return 0;
}
//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


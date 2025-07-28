#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	long int n,a,b,c;
	cout << "Enter 3 digits :";
	cin >> n;
	a=n/1000;
	n=n%1000;
	b=n/100;
	n=n%100;
	c=n/10;
	n=n%10;
	cout<< "After number in reverse order " << n << endl;
	return 0;
}

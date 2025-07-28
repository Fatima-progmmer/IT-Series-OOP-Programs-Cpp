#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	a=b=c=d=0;
	a++;
	b=a;
	c++;
	d=c;
	cout << "a :" << a <<endl;
	cout << "b :" << b << endl;
	cout << "c :" << c << endl;
	cout << "d :" << d << endl;
	return 0;
}

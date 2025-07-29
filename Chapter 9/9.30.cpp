#include<iostream>
using namespace std;
void line();
void line(int n);
void line(int n,char c);
int main()
{
	line();
	line(3);
	line(5,'n');
 	return 0;
}

void line()
{
	int i;
	for(i=1;i<10;i++)
	cout << "*";
	cout << endl;
}

void line(int n)
{
	int i;
		for(i=1;i<n;i++)
	cout << "*";
	cout << endl;
}

void line(int n,char c)
{
		for( int i=1;i<10;i++)
	cout << "c";
	cout << endl;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


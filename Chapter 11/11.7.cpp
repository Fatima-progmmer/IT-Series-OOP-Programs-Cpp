#include<iostream>
#include <conio.h>
using namespace std;
void get(int *);
void dbl(int *);
int main()
{
	int num;
	get(&num);
	cout << "You eneterd " << num << endl;
	dbl(&num);
	cout << "Its double is " << num << endl;
 	return 0;
}

void get(int *x)
{
	cout << "Enter an integer:" ;
	cin >> *x;
}

void dbl(int *y)
{
	*y=*y*2;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


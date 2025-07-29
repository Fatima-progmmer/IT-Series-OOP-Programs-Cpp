#include<iostream>
using namespace std;
void swap(int &x,int &y);
int main()
{
	int a,b;
	cout << "Enter an integer :";
	cin >> a;
	cout << "Enter an integer:";
cin >> b;
cout << "Values before swapping :\n";
cout << "a=" << a << endl;
cout << "b=" << b << endl;
cout << "Swapping the values......" << endl;
swap(a,b);
cout << "Values after wapping ...." << endl;
cout << "a=" << a << endl;
cout << "b=" << b << endl;
 	return 0;
}
void swap(int&x,int&y)
{
	int t;
	t=x;
	x=y;
	y=t;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again



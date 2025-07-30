#include<iostream>
using namespace std;
int main()
{
	int *ptr;
	ptr=new int;
	cout << "Enter an integer:";
	cin >> *ptr;
	cout << "You entered " << *ptr << endl;
	cout << "Its stored at " << ptr << endl;
	delete ptr;
 	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


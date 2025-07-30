#include<iostream>
using namespace std;
int main()
{
	int marks[5],i;
	int *ptr;
	cout << "Enter five marks:";
	for(i=0;i<5;i++)
	cin >> marks;
	cout << "You entered the following values:\n";
	for(i=0;i<5;i++)
	cout << *ptr++  << "\t";
 	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


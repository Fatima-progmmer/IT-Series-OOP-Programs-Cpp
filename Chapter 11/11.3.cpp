#include<iostream>
using namespace std;
int main()
{
	float arr[5],*ptr;
	cout << "Enter five floating point values :";
	for(int i=1;i<=5;i++)
	cin >> arr[i];
	ptr=&arr[4];
	cout << "The values in reverse oreder:\n";
	for(int i=0;i<5;i++)
	cout << *ptr-- << endl;
 	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


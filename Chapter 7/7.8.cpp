#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	int min;
	for(int i=0;i<=10;i++)
	{
		cout << "Enter value :" ;
		cin >> arr[i];
	}
	min=arr[0];
	for(int i=0;i<10;i++)
	if(min>arr[i])
	min=arr[i];
	cout << "Minimum value :" << min ;
 	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


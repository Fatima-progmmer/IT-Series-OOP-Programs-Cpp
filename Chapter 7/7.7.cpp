#include<iostream>
using namespace std;
int main()
{
	int max;
	int arr[10];
	for(int i=0;i<=10;i++)
	{
		cout << "Enter value:" ;
		cin >> arr[i];
	}
	max=arr[0];
	for(int i=0;i<=10;i++)
	if(max<arr[i])
	max=arr[i];
	cout << "Maximum value:" << max;
 	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


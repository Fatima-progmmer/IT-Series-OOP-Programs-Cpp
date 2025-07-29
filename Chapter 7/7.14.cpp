#include<iostream>
using namespace std;
int main()
{
	int arr[2][5],i,j;
	for(i=0;i<2;i++)
	for(j=0;j<4;j++)
	{
		cout << "Enter an integer :";
		cin >> arr[i][j];
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		cout << arr[i][j] << "\t";
		cout << endl;
	}
 	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


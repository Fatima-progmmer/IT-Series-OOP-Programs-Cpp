#include<iostream>
using namespace std;
int maxs(int arr[3][2])
int main()
{
	int num[3][2];
	int i,j,max;
	for(i=0;i<3;i++)
	for(j=0;j<2;j++)
	{
		cout << "Enter value :" << endl;
		cin >> num[i][j]
	}
	max=maxs(num);
	cout << "The maximum value is " << max << endl;
 	return 0;
}


int maxs(int arr[3][2])
{
	int r,c,m;
	m=arr[0][0];
	for(r=0;r<3;r++)
	for(c=0;c<2;c++)
	if(arr[r][c]>m)
	m=arr[r][c];
	return m;
}
//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


#include<iostream>
using namespace std;
int main()
{
	int x,y;
	int A[4][4],sum=0;
	cout << "Enter the element of the matrix :"<, endl;
	for(y=0;y<4;y++)
	for(x=0;x<4;x++)
	{
		cout << "Element " << x+1 << "," << y+1 << ":" ;
		cin >> A[x][y];
	}
	//sum of diagonal element
	for(x=0;x<4;x++)
	for(y=0;y<4;y++)
	if(x==y)
	sum+=A[x][y];
	cout << "Sum of the diagonal elements is :" << sum;
 	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


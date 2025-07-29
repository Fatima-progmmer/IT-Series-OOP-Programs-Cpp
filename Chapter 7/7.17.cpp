#include<iostream>
#include<iomanip>
#include<process>
using namespace std;
int main()
{
	int i,j,r1,r2,c1,c2,a[20][20],b[20][20],c[20][20];
	cout << "Enter rows and columns of first matrix:";
	cin >> r1 >> c1;
	if((r1!=r2)||(c1!=c2))
	{
		cout << endl << "Matrix addition is not possible";
		exit(0);
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			cout << "enter the " << i << " x " << j << " element of the first matrix";
			cin >> a[i][j];
		}
	}
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			cout << "Enter the " << i << " x " j << " element of the second matrix";
			cin >>b[i][j];
		}
	}
	cout << endl;
	for(i=0;i<r1;i++)
	{
		cout << endl;
		for(j=0;j<c1;j++)
		cout << setw(9) << b[i][j];
	}
	cout << endl;
	cout << "\t\t\t=";
	cout << endl;
	for(i=0;i<r1;i++)
	{
		cout << endl;
		for(j=0;j<c1;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			cout << setw(9) << c[i][j];
		}
	}
 	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


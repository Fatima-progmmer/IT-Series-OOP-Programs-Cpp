#include<iostream>
using namespace std;
int main()
{
	const int size=5;
	int numbers[size];
	int squares[size];
	int cubes[size];
	int sums[size];
	for(int i=0;i<=size;i++)
	{
		numbers[i] =i;
		squares[i]=i*i;
		cubes[i]=i*i*i;
		sums[i]=numbers[i]+squares[i]+cubes[i];
	}
	int total=0;
	cout << "numbers:" << endl;
	for(int i=0;i<=size;i++)
	cout << numbers[i] << "\t";
	cout <<endl;
	cout <<"Squares:" << endl;
	for(int i=0;i<=size;i++)
	cout << squares[i] << "\t";
	cout << endl;
	cout << "Cubes :" << endl;
	for(int i=0;i<=size;i++)
	cout << cubes[i] << "\t";
	cout << endl;
 	cout << "Sums:" <<endl;
 	for(int i=0;i<=size;i++)
 	{
 		cout << sums[i] << "\t";
 		total=total+sums[i];
	 }
	 cout << endl;
	 cout << "Grand total :" << total << endl;
	 return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


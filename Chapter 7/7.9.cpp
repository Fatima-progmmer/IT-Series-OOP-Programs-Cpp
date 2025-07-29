#include<iostream>
using namespace std;
int main()
{
	int num[5];
	for(int i=0;i<=5;i++)
	{
		cout << "Enter an imteger:";
		cin >> num[i];
	}
	cout << "\nThe array in actual order:";
	for(int i=0;i<=5;i++)
	cout << num[i];
	cout << "\n The array in reverse order:\n";
	for(int i=4;i>=0;i--)
	cout << num[i];
 	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


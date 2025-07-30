#include<iostream>
using namespace std;
void get(int*,int);
int main()
{
	int n.*ptr;
	cout << "Enter the length of array:";
	cin >> n;
	ptr=new int[n];
	get(ptr,n);
	cout << "You eneterd the following values\n";
	for(int j=0;j<n;j++)
	cout << *ptr++ << endl;
	delete[] ptr;
 	return 0;
}


voig get(int *p,int L)
{
	int i;
	for(i=0;i<L;i++)
	{
		cout << "Enter an integer:";
		cin >> *p++;
	}
}
//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


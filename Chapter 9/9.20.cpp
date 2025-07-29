#include<iostream>
using namespace std;
void square(int n);
int main()
{
		int num[5];
	cout << "Enter five integers:" << endl;
	for(i=0;i<5;i++)
	cin >> num[i];
	cout << "Calling the functions....." << endl;
	for(i=0;i<5;i++)
	square(num[i]);
	return 0;
}

void square(int n)
{
	cout << n << "\t" << n*n << endl;
}
//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


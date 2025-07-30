#include<iostream>
using namespace std;
int main()
{
	int *ptr[3],a,b,c;
	ptr[0]=&a;
	ptr[1]=&b;
	ptr[2]=&c;
	cout << "Enter three integers :";
	cin >> a >> b >> c;
	cout << "You entered following values:\n";
	for(int i=0;i<3;i++)
	cout << *ptr[i] << endl;
 	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


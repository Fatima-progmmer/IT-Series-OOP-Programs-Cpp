#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	float max;
	cout << "Enter marks of 1st subject :";
	cin >> a;
	cout << "Enter marks of 2ns subject :";
	cin >> b;
	cout << "Enter marks of 3rd subject :";
	cin >> c;
	if(b>max)
	max=b;
	if(c>max)
	max=c;
	cout << "The maximun number is " << max;
	return 0;
}

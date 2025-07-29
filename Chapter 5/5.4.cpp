#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	float avg;
	cout << "Enter marks of 1st subject :";
	cin >> a;
	cout << "Enter marks of 2ns subject :";
	cin >> b;
	cout << "Enter marks of 3rd subject :";
	cin >> c;
	avg = (a+b+c)/3
	if(avg>80)
	{
		cout << "You are above standard";
		cout << "Admission granted .";
	}
	return 0;
}

#include<iostream>
using namespace std;
struct birth
{
	int day;
	int month;
	float year;
}
int main()
{
	birth b;
	cout << "Enter day of birth:" ;
	cin >> b.day;
	cout << "Enter month of the day:";
	cin >>b.month;
	cout << "Enter year of the birth:";
	cin >> b.year;
	cout <<"\nYour date of birth is " << b.day << "/" << b.month <<"/" <<b.year;
 	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


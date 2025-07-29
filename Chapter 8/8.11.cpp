#include<iostream>
using namespace std;
struct date
{
	int day;
	int month;
	int year;
};
struct phonebook
{
	char name[40];
	char city[40];
	int tel;
	date birthday;
};
int main()
{
	struct phonebook a1;
	cout << "Enter name:";
	cin >> a1.name;
	cout << "Enter city:";
	cin >> a1.city;
	cout << "Enter Phone number:";
	cin << a1.tel;
	cout << "Enter date of birth(dd-mm-yy";
	cin >> a1.birthday.day >>a1.birthday.month >> a1.birthday.year;
	cout << "\nThe sixe of the structure variable is :" << sizeof(a1);
	cout << "\nThe entry made is:";
	cout << a1.name << "-" <<a1.city << "-" <<a1.tel;
	cout << "\nThe birthday is on:" << a1.birthday.day << "-" << a1.birthday.month << "-" << a1.birthday.year;
 	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


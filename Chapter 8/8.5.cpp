#include<iostream>
using namespace std;
struct Phone
{
	int ncode;
	int acode;
	long number;
};
int main()
{
	Phone p1,p2={92,41,9220083};
	cout << "Enter national code:";
	cin >> p1.ncode;
	cout << "Enter area code :";
	cin >> p1.acode;
	cout << "Enter Phone number :";
	cin >> p1.number;
	cout << "Phone number 1:+";
	cout << p1.ncode << "-" << p1.acode << "-" << p1.number;
	cout << "Pjone number 2:+";
	cout << p2.code << "-" << p2.code << "-" << p2.number;
 	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


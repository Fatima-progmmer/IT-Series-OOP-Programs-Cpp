#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int hrs,wk,dy;
	cout << "Enter number of hours :";
	cin >> hrs;
	wk=hrs/168;
	hrs=hrs%168;
	hrs=hrs%24;
	cout << "weeks =" << wk << endl;
	cout << "Hours =" << hrs<< endl;
	cout << "Days =" << dy << endl;
	return 0;
}

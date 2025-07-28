#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int ev,od,r;
	cout << "enter an even number :" ;
	cin >> ev;
	cout << "Enter an odd number :" ;
	cin >> od;
	r=1000-((ev*5)+(od*5));
	cout << "Difference =" << r;
	return 0;
}

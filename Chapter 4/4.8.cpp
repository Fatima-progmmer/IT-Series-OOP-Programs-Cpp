#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char str[]="OOp using C++";
	cout<< setw(20) << setfill('*') << str<< endl;
	cout<< setw(20) << setfill('&') << str<< endl;
	cout<< setw(20) << setfill('=') << str<< endl;
	return 0;
	}

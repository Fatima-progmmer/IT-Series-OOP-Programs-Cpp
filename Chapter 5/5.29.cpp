#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout << "Enter your marks";
	cin >> marks;
	cout << "Results is " << (marks>40 ?"pass" :"fail");
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "Enter any character:";
	cin >> ch;
	if((ch=='a')||(ch=='u')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
	cout << "You eneterd a vowel";
	else
	cout << "You did not enter a vowel";
	return 0;
}

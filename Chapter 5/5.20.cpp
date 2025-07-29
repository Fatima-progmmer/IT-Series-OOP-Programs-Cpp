#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "Enter any character :";
	cin >> ch;
	if((ch>='A')&&(ch<='Z'))
	cout << "The character " << ch << " is a capital letter." << endl;
	else if((ch>='a')&&(ch<='z'))
	cout << "The character is " << ch << " is a small case letter.";
	else if((ch>='0')&&(ch<='9'))
	cout << "The character is " << ch << " is a digital";
	else
	cout << "The character is a symbol.";
	return 0;
}

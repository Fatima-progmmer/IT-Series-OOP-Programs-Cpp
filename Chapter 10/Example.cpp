#include<iostream>
#include<conio.h>
#include<math.h>
#include<ctype.h>
using namespace std;
int main()
{
	char ch;
	cout << "Enter a signle charachter :";
	cin >> ch;
	cout << ch << " is :" << endl;
	if(isalnum(ch)!=0)
	cout << "\t an alphumeric." << endl;
	else
	cout << "\t not an alphumeric." << endl;
	if(isalpha(ch)!=0)
	cout << "\t an alphbet." << endl;
	else
	cout << "\t not an alphbet." << endl;
	if(isdigit(ch)!=0)
	cout << "\t an Digit." << endl;
	else
	cout << "\t not a Digit." << endl;
	if(islower(ch)!=0)
	cout << "\t lower character." << endl;
	else
	cout << "\t  not lower character." << endl;
	if(isupper(ch)!=0)
	cout << "\t lower character." << endl;
	else
	cout << "\t not lower character" << endl;
	if(isprint(ch)!=0)
	cout << "\t printing character." << endl;
	else
	cout << "\t not printing character" << endl;
	if(ispunct(ch)!=0)
	cout << "\t a punctuation character ." << endl;
	else
	cout << "\t not a punctuation character." << endl;
	if(isspace(ch)!=0)
	cout << "\t a space." << endl;
	else
	cout << "\t not a space." << endl;
 	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


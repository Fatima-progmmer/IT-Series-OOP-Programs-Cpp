#include<iostream.h>
#include<conio.h>
#include<string.h>
using namespace std;
void main()
{
	char str[] = "Hello";
	cout << "string before strrev " << str << endl;
	strrev(str);
	cout << "string after strrev " << str << endl;
}
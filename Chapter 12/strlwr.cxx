#include<iostream.h>
#include<conio.h>
#include<string.h>
using namespace std;
void main()
{
	char str[] = "Hello world ";
	cout << "string before strlwr " << str << endl;
	strlwr(str);
	cout << "string after strlwr " << str << endl;
}
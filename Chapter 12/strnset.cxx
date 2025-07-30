#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[] = "Hello world ";
	char ch= "$" ;
	cout << "string before strnset " << str << endl;
	strnset(str,ch,5);
	cout << "string after strnset " << str << endl;
}
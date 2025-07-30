#include<iostream>
#include<conio.h>
#include<string>
#include<stdio.h>
using namespace std;;
int main()
{
	char string [25] = "This is string ";
	char *ptr, c= 'r';
	ptr = strchr(string,c);
	if(ptr)
	cout << "The character " << c << "  is at position " << ptr-string << endl;
	else
	cout << "The character was not found " << endl;
	return 0;
}
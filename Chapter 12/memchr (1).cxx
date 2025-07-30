#include<iostream>
#include<conio.h>
#include<string>
#include<stdio.h>
using namespace std;;
int main()
{
	char test[]= "String test";
	char search;
	void *result;
	cout << "Enter a single character to search  =";
	cin >> search;
	cout << "The test string is = ";
	puts(test);
	cout << "Looking for " << search  << "....\n";
	result = memchr(test, search,12);
	if(result !=NULL)
	cout << "The character found in string";
	else
	cout << "The character not found in string ";
	return 0;
}
#include<iostream>
#include<conio.h>
#include<string>
#include<stdio.h>
using namespace std;;
int main()
{
	char test1[] = "Simple string";
	char test2[15];
	cout << "The value is test 1 is ";
	puts(test1);
	cout << "Copying test1 to test2 ........\n";
	memcpy(test2,test1,15);
	cout << "The value of test2 is ";
	puts(test2);
	return 0;
}
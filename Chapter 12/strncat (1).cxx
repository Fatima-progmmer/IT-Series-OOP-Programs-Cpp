#include<iostream>
#include<conio.h>
#include<string>
#include<stdio.h>
using namespace std;;
int main()
{
	char first[25] = "Hello ";
	char second[] = "world of programming ";
	strncat(first, second,6);
	cout << first << endl;
	return 0;
}
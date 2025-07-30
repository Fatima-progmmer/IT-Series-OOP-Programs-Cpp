#include<iostream>
#include<conio.h>
#include<string>
#include<stdio.h>
using namespace std;;
int main()
{
	char str1[50] = "The more you work..... ";
	char str2[50] = "The more you gain......";
	cout << "String 1: ";
	puts(str1);
	cout << "String 2 :";
	puts (str2);
	cout << "Concatimg the string ......\n";
	strcat(str1,str2);
	cout << "string 1 after concatenation ";
	puts (str1);
	return 0;
}
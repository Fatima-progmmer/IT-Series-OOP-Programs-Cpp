#include<iostream>
#include<conio.h>
#include<string>
#include<stdio.h>
using namespace std;;
int main()
{
	char buffer[25]= "A simple String ";
	cout << "buffer before memset ";
	puts(buffer);
	memset(buffer,'X',8);
	cout << "buffer after memset ";
	puts(buffer);
	return 0;
}
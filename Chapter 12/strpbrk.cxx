#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
	char *string1 = "abcdefghijklmnopqrstuvwxyz";
	char *string2 = "zac";
	char *ptr;
	ptr=strpbrk(string1,string2);
	if(ptr)
	cout << "Strbrk found first character " <<*ptr << endl;
	else
	cout << "Strbrk didn't found any character " << endl;
	return 0;
}
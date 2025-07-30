#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
	char *string1 = "1234567890";
	char *string2 = "123DC8";
	int length;
	length=strspn(string1, string2);
	cout << "Charachter where string is different at position " << length << endl;
	return 0;
}
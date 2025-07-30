#include<iostream.h>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
	char string [10];
	char str[] = "String handling ";
	stpcpy(string,str);
	cout << string ;
	return 0;
}
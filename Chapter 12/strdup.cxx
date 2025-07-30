#include<iostream.h>
#include<conio.h>
#include<string.h>
using namespace std;
void main()
{
	char *dup,str[] = "Hello world";
	cout << "Original string is " << str <<endl;
	dup =strdup(str);
	cout << "Duplicate string is " << dup << endl;
}
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
	char str[16] = "abc.d";
	char *p;
	p = strtok(str," , ");
	if(p)
	cout << p << endl;
	p = strtok(NULL, " ,  ");
	if(p)
	cout << p<< endl;
	return 0;
}
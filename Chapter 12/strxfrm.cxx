#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
	char target[100] ;
	char source[]= "Hello world " ;
	int length;
	length=strxfrm(target ,source, 80);
	cout << target << "has the length  " << length << endl;
	return 0;
}
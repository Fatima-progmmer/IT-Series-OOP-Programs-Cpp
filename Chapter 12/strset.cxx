#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
	char str[10] = "123456789";
	char ch= '*' ;
	cout << "Before strset " << str << endl;
	strset(str,ch);
	cout << "After strset " << str << endl;
	return 0;
}
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char first[30], second [30],full[60];
	int i,j;
	i=j=0;
	cout << "Enter your first name = ";
	cin.getline(first,30);
	cout << "Enter your second name = ";
	cin.getline(second,30);
	while(first[i]!='\0')
	{
		full[i] = first[i];
		i++;
	}
	full[i++]= ' ';
	while(second [j]!='\0')
	{
		full[i] = second [j];
		i++;
		j++;
	}
	full[i]='\0';
	cout << "Your first name is " << first << endl;
	cout << "Your second name is " << second << endl;
	cout << "Your full name is " << full <<endl;
	return 0;
}
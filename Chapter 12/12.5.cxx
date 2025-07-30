#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char str[50];
	int i=0;
	cout << "Enter characters =" ;
	cin.getline(str,50);
	while(str[i]!='\0')
	i++;
	cout << "The length of character you entered is " << i << endl;
	return 0;
}
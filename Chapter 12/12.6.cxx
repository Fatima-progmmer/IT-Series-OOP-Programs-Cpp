#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char s1[50],s2[50];
	int i=0;
	cout << "Enter a string = ";
	cin.getline(s1,50);
	while(s1[i]!='\0')
	{
		s2[i]=s1[i];
		i++;
	}
	s2[i]='\0';
	cout << "The s1 is = " << s1 << endl;
	cout << "The s2 is = " << s2;
	return 0;
}
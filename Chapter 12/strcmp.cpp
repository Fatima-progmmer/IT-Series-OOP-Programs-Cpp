#include<iostream>
#include<conio.h>
#include<string.h >
using namespace std;
int main()
{
	char str1[50] ,str2[50];
	int ch,r;
	cout << "Enter string 1 =";
	cin.getline(str1,50);
	cout << "Enter string 1 =";
	cin.getline(str1,50);
	cout << " Enter the number of charactersb ton compARE ;";
	cin >> ch;
	r = strncmp (str1,str2,ch);
	if(r==0)
	cout << "THE STRING ARE Equal." << endl;
	if (r < 0)
	cout <<"String 1 is greater than string 2" << endl;
	if (r > 0)
	cout <<"String 1 is less than string 2" << endl;
	return 0;
}

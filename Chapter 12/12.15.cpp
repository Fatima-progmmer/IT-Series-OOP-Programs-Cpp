#include<iostream>
#include<coino>
#include<stdio>
#include<string>
#include<process>
using namespace std;
void main()
{
	char sen1[50],sen2[50];
	void chk_eq(char str1[],char str[]);
	cout << "Enter string 1 :";
	cin >> sen1;
	cout << "Enter string 2 :";
	cin >> sen2;
	chk_eq(sen1,sen2);
}
void chk_eq(char str1[],char str2[])
{
	int |1,|2;
	|1 = strlen(str1);
	|2 = strlen(str2);
	if(|1!=|2)
	{
		cout << "Two things are not equal";
		exit(1);
	}
	for (int i=0;i<=|1-1;i++)
	{
		if(str[1]!=strr2[i])
		{
			cout << "\nTwo things are not equal";
			exit(1);
		}
		}
		cout << "Two strings are equal";
	}
}

#include<iostream>
#include<conio.h>
#include<math.h>
#include<ctype.h>
using namespace std;
int main()
{
	int i=0;
	char ch[50];
	cout << "Enter a sentence:";
	gets(ch);
	cout << "The sentence in lower case :";
	while(ch[i]!='\0')
	{
		ch[i]=tolower(ch[i]);
		i++;
	}
	puts(ch);
	i=0;
		cout << "The sentence in upper case :";
	while(ch[i]!='\0')
	{
		ch[i]=toupper(ch[i]);
		i++;
	}
	puts(ch);
 	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


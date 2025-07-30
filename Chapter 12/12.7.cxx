#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 char str[50];
 int i,v;
 i=v=0;
 cout << "Enter a sentence = " ;
 cin.getline(str,50);
 while(str[i]!='\0')
 {
 	switch (str[i])
 	{
 		case 'a':
 		case 'e':
 			case 'i':
	case 'o':
	case 'u':
	v++;
 	}
 	i++;
 }
 cout << "Total vowels in sentence is = " << v;
 return 0;
}
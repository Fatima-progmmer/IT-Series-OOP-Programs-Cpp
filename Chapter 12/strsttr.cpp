#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char str1[41]="programming makes file excuteing.";
	char str2[20];
	char *res;
	cout << "the string to be serached is :";
	puts(str1);
	cout << "Enter the search string:";
	gets(str2);
	res = strstr(str1,str2);
	if(res== NULL)
	cout << "\n the bserach string was not found.\n";
	else
	{
		cout << "\n Matching string was found at " << res-str1;
		cout << "\n Results points to be string ;";
		puts(res);
	}
	return 0;
}

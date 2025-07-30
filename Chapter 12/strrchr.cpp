#include<iostream>
#include<conio.h>
#include<string.h >
using namespace std;
int main()
{
	char string[20] = "This is a string ";
	char *ptr ,c=r;
	ptr = strrchr(string,c);
	if(ptr)
	cout << "The character " << c << " is at position" << ptr-string <M endl;
	else
	cout << "thE CHARCHTER was not found " << endl;
	return 0;
}

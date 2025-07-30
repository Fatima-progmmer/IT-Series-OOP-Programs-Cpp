#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char str[25];
	int len;
	cout << " enter a string :";
	gets(str);
	len = strlen(str);
	cout << "The string contain : " << len << "characters";
	return 0;
}

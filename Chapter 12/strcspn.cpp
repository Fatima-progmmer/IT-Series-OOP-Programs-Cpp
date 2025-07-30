#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char str[25]= "C++ makes life spicy ";
	char srch[10];
	int res;
	cout << "The search string is :";
	puts(str);
	res = strcspn (str,srch);
	if(res== strlen (str))
	cout << "\n None of the chaaracter found." << endl;
	else
	cout << "\n characters found at index " << res ;
	return 0;
}

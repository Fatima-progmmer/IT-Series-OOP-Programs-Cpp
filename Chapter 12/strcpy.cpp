#include<iostream>
#include<string>
using namespace std;
int main()
{
	char sen1[50]="programming makes the life helln .";
	char sen2[50]="Built-IN FUNCTIONS Makes its heaven .";
	cout << "Enter string 1 :";
	cin >> sen1;
	cout << "Enter string 2 :";
	cin >> sen2;
	strcpy (sen1,sen2);
	cout << "\nAfter strcpy(sen1,sen2....\n";
	cout << "str1 =";
	puts(sen1);
	cout << "str2 =";
	puts(sen2);
	return 0;
}

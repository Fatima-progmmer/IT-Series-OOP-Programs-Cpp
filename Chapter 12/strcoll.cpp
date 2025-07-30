#include<iostream>
#include<conio.h>
#include<string.h >
using namespace std;
int main()
{
	char one[]= "international";
	char two[] = "borland";
	int check;
	check = strcoll (one,two);
	if(check==0)
	cout << "THE STRING ARE Equal." << endl;
	if (check < 0)
	cout << one << " COMES BEfore  " << two << endl;
	if (check > 0)
	cout << two << " COMES BEfore  " << one << endl;
	return 0;
}

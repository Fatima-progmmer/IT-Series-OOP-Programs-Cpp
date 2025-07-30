#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
char country[5][30],name;
for(int i=1;i<=5;i++)
{
	cout << "Enter "<< i <<" country name =" ;
	cin >> country [i];
}
for(int i=1;i<=5;i++)
{
	name=country [i][0];
	switch (name)
	{
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
	cout << country [i] << endl;
	}
}
return 0;
}
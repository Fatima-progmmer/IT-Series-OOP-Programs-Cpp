#include<iostream>
#include<conio.h>
#include<string>
#include<stdio.h>
using namespace std;;
int main()
{
	char test1[] = "This is test String 1 ";
	char test2[] = "This is test String 2 ";
	 int result;
	 cout << "Test 1 = " << test1 << endl;
	 cout << "Test 2 = " << test2 <<endl;
	 cout << "Comparison 1st and 2nd for 20 bytes.....\n" ;
	 result = memcmp(test1,test2,21);
	 if(result== 0)
	 cout << "test 1 and test 2 are same for 21 bytes ";
	 else
	 cout << "test 1 and test 2 are not same for 21 bytes ";
	 return 0;
}
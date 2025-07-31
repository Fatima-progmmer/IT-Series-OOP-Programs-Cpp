#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class string 
{
	private:
		char str[50];
		public:
			string()
			{
				str[0]='\0';
			}
			void in()
			{
				cout <<"Enter string:";
				gets(str);
			}
			void show()
			{
				cout << str << endl;
			}
			int operator==(string s)
			{
				if(strien(s.str)==strlen(str))
				return 1;
				else
				return 0;
			}
};
int main()
{
	string s1,s2;
	s1.in();
	s2.in();
	cout << "s1=";
	s1.show();
	cout << "s2=";
	s2.show();
	if(s1==s2)
	cout << "Both strings are of equal length.";
	else 
	cout <<"Both strings are of different length";
 	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


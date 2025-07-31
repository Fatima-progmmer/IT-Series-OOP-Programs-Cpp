#include<iostream>
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
			cout << "Enter string:";
			gets(str);
		}
		void show()
		{
			cout << str << endl;
		}
		string operator+(string s)
		{
			string temp;
			strcpy(temp.str,str);
			strcat(temp.str,s.str);
			return temp;
		}
};
int main()
{
	string s1,s2,s3;
	s1.in();
	s2.in();
	cout << "s1=" ;
	s1.show();
	cout << "s2=";
	s2.show();
	cout << "s3=";
	s3.show();
	cout << "Concatententating s1 ,s2 and s3 is " << endl;
	s3=s1=s2;
	cout << "s3=";s3.show();
 	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


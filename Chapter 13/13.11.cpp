#include<iostream>
#include<conio.h>
using namespace std;
class Over
{
	private:
		int num;
		char ch;
		public:
			Over() //constructor without arugment
			{
				num = 0;
				ch = 'A';
			}
			Over(int n,char c) //constructor with arugment
			{
				num = n;
				ch =c;
			}
			void show()
			{
				cout << "Num is :" << num << endl;
				cout << "Character is " << ch  << endl;
			}
};
int main()
{
	Over first,second(100,'T'); // automatically pass the arugment to second constructor
	cout << "The content of first " << endl;
	first.show();
	cout << "The content of second is :" << endl;
	second.show();
	return 0;
}

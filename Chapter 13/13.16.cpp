#include<iostream>
using namespace std;
class student
{
	private :
		static int r;
		int mo,marks;
		char name[50];
		public:
			student()
			{
				r++;
				mo=r;
			}
			void in()
			{
				cout << "Enter your name :";
				gets(name);
				cout << "Enter your marks :";
				cin >> marks;
			}
			void show()
			{
				cout << "Roll No:" << r << endl;
				cout << "Name :" << name << endl;
				cout << "Marks :" << marks << endl;
			}
};
int main()
{
	student s1,s2,s3;
	s1.in();
	s2.in();
	s3.in();
	s1.show();
	s2.show();
	s3.show();
	return 0;
}


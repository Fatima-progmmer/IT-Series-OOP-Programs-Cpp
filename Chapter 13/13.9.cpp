#include<iostream>
using namespace std;
class student
{
	private:
		int marks;
		char grade;
		public:
			student(int m,char g) //constructor are created ang arugment are passed
			{
				marks =m;
				grade =g;
			}
			void show()
			{
				cout << "Marks =" << marks << endl;
				cout << "Grade =" << grade << endl;
			}
};
int main()
{
	student s1(730,'A'),s2(621,'B');
	cout << "Record of student 1 :" << endl;
	s1.show();
	cout << "Record of student 2 :" << endl;
	s2.show();
	return 0;
}

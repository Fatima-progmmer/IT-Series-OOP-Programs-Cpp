#include<iostream>
using namespace std;
struct student
{
	int rno;
	char name[50];
	int marks;
};
int main()
{
	student s;
	ifstream in("student.txt",ios::binary)
	while(!in.eof())
	{
		in.read((char*)&s,sizeof(s))
		cout << "Roll no:" << s.rno << endl;
		cout << "Name:" << s.name << endl;
		cout << "Marks:" << s.marks << endl;
	}
	return 0;
}

\\coded by Tanzeela
  \\Do again and again


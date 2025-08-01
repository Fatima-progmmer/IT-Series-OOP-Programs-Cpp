#include<iostream>
using namespace std;
struct student
{
	int mo;
	char name[50];
	int marks;
}
int main()
{
	Student s;
	ofstream out("Student.txt",ios::binary);
	for(int i=1;i<=3;i++)
	{
		cout << "Enter your roll no:";
		cin >> s.mo;
		cout << "Enter Your name:";
		cin >> s.name;
		cout << "Enter your marks:";
		cin >> s.marks;
		out.write((char*)&s,sizeof(s));
	}
	out.close();
	return 0;
}

\\coded by Tanzeela
  \\Do again and again


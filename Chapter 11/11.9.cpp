#include<iostream>
using namespace std;
struct Student
{
	int mo,marks;
	float gpa;
};
void input(Student*);
void output(Student*);
int main()
{
	Student s;
	input(&s);
	output(&s);
 	return 0;
}

void input(Student *p)
{
	cout << "Enter roll no:";
	cin >> p->mo;
	cout << "Enter marks:";
	cin >> p->marks;
	cout << "Enter gpa:";
	cin >>p->gpa;
}

void output(Student *m)
{
	cout << "Roll no:" << m->mo << endl;
	cout << "Marks:" << m->marks << endl;
	cout << "GPA :" << m->gpa << endl;
}
//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


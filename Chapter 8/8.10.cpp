#include<iostream>
using namespace std;
struct Result
{
	int marks;
	char grades;
};
struct Record
{
	int rno;
	Result r; // create object of first structure in second class
};
int main()
{
	Record rec;
	cout << "Enter roll no:";
	cin >> rec.rno;
	cout << "Enter marks :";
	cin >> rec.r.marks;
	cout << "Enter Grade :";
	cin >> rec.r.grades;
	cout << "Roll number:" << rec.rno << endl;
	cout << "Marks :" << rec.r.marks << endl;
	cout << "GRade :" << rec.r.grades<< endl;
 	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


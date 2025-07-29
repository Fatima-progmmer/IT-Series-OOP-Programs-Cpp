#include<iostream>
using namespace std;
struct Dimensional
{
	double length;
	double width;
};
struct Results
{
	double area;
	double perimeter;
};
struct rectangle
{
	Dimension size;
	Results stat;
}
int main()
{
	Rectangle box;
	cout << "Enter the length of the rectangle :";
	cin >> box.size.length;
	cout << "Enter the width of the rectangle :";
	cin >> box.size.width;
	box.stat.area=box.size.length*box.size.width;
	box.stat.perimeter =2*box.size.length+2*box.size.width;
	cout.setf(ios::fixed,ios::floatfield);
	cout.setf(ios::showpoint);
	cout << setprecision(2);
	cout << "The area of the rectangle is " << box.stat.area << endl;
	cout << "The perimeter of rectangle is " << box.stat.perimeter << endl;
		return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


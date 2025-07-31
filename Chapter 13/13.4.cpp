#include<iostream>
using namespace std;
class circle
{
	private:
	int radius;
	public:
	void in()
	{
		cout <<"Enter radius of circle = ";
		cin >> radius;
	}
	void area()
	{
		cout << "The area of circle ⭕ is = " << 3.14*radius*radius << endl;
	}
	void circumference ()
	{
		cout << "The circumference of circle is=" << 2*3.14*radius << endl;
	}
};
int main()
{
	circle check;
	check.in();
	check.area();
	check.circumference ();
	return 0;
}

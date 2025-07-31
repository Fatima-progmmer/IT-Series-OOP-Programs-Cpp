#include<iostream>
using namespace std;
class B;
class A
{
	private :
		int a;
		public:
			A()
			{
				a=10;
			}
			friend void show(A,B);
};
class B
{
	private :
		int b;
		public:
			B()
			{
				b=20;
			}
			friend void show(A,B); //it allow to use private member from outside of the class
			// it also use two cclasses as a parameter
};
void show(A x,B y)
{
	int r;
	r=x.a +y.b;
	cout << "The value of class A of object =" << x.a << endl;
		cout << "The value of class B of object =" << y.b << endl;
		cout << "The sum of both values =" << r << endl;
	
}
int main()
{
	A object1;
	B object2;
	show(object1,object2);
	return 0;
}

#include<iostream>
using namespace std;
class Add
{
	private:
		int a,b;
		public:
			Add()
			{
				a=b=0;
			}
			void in()
			{
				cout << "Enter a=";
				cin >> a;
				cout << "Enter b=";
				cin >> b;
			}
			void show()
			{
				cout << "a=" << a << endl;
				cout << "b=" << b << endl;
			}
			Add operator +(Add p)
			{
				Add temp;
				temp.a=p.a+a;
				temp.b=p.b+b;
				return temp;
			}
};
int main()
{
	Add x,y,z;
	x.in();  //x is calling object
	y.in();   //y is passed as parameter
	z=x+y;  //the z add the calling object and parameter object
	x.show();
	y.show();
	z.show();
	return 0;
}

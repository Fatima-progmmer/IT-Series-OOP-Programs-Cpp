#include<iostream>
using namespace std;
class test
{
	private:
		static int n;
			public:
				static void show()		//fuctrion can access without use of any object inb class
				{
					cout << "n =" << n << endl;
				}
};
int test::n =10;   //dweclare a static member
int main()
{
	test::show();  // call a fuction without creating an object
	return 0;
}

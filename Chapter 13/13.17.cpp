#include<iostream>
using namespace std;
class yahoo
{
	private:
		static int n;  // static data member n to count the number of objects that have been created
		public:
			yahoo()
			{
				n++;
			}
			void show()
			{
				cout << "You have created " << n << endl;
			}
};
int yahoo::n=0 ;    //n define outside to class b/c it is not a part of function not define can cause error
int main()
{
	yahoo::show();  // directly access to fuction by use of scope resoulation
	yahoo x,y;
	x.show();
	yahoo z;
	z.show();
	return 0;
}

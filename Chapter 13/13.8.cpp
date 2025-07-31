#include<iostream>
using namespace std;
class number
{
	private:
		int x,y;
		public:
			number()
			{
				x=y=100;
			}
			void aveg()
			{
				cout << "x :" << x << endl;
				cout << "y :" << y << endl;
				cout << "average is : " << x+y/2;
				
			}
};
int main()
{
	number n;
	n.aveg();
	return 0;
}

#include<iostream>
using namespace std;
class Count
{
	private:
		int n;
		public:
			Count()
			{
				n=0;
			}
			void show()
			{
				cout << "n =" <<n << endl;
			}
			Count operator++(int)  //overloading operator for postfix 
			//int is not an integer parameter
			{
				Count temp;
				n=n+1;
				temp.n=n;
				return temp;
			}
			Count operator++()
			{
				Count temp;
				n=n+1;
				temp.n=n;
				return temp;
			}
};
int main()
{
	Count obj1;
	obj1.show();
	++obj1;
    obj1++;
	obj1.show();
	return 0;
}


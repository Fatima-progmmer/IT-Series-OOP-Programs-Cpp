#include<iostream>
using namespace std;
class check
{
	private:
		int n;
		public:
			check()
			{
				cout << "object is created " << endl;
			}
			~check()
			{
				cout << "object is destroyed " << endl;
			}
};
int main()
{
	check a,b,c;
	return 0;
}

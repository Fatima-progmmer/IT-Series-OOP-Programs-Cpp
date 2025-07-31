#include<iostream>
using namespace std;
class test
{
	private:
	int n;
	public:
	void in()
	{
		cout << "Enter a number = ";
		cin >> n;
	}
	void out()
	{
		cout << " The number is " << n;
	}
};
int main()
{
	test obj;
	obj.in();
	obj.out();
}

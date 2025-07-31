#include <iostream>
using namespace std;
class marks
{
	private:
	int a,b,c;
	int result;
	int av;
	public:
	void in()
	{
		cout << "Enter three marks =";
		cin >> a >> b >> c; 	
	}
	void sum()
	{
		cout << "The sum of three marks is  ";
		result = a+b+c;
		cout << result << endl;
	}
	void average ()
	{
		cout << " The average of this marks is " ;
		av= result/3;
	cout 	<< av<< endl;
	}
};
	int main()
{
	marks obj;
	obj.in();
	obj.sum();
	obj.average();
	return 0;
}

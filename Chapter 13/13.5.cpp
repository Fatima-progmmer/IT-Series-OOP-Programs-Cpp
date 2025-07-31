#include<iostream>
using namespace std;
class result
{
	private:
	int mo , marks[3];
	char name[50];
	public:
	void input()
	{
		cout << "Enter roll number ":
		cin >> mo;
		cout << "Enter your name ":
		cin >> name;
		for (int i=1;i<=3;i++)
		{
			cout << "Enter your marks : ";
			cin >> marks [i];
		}
	}
	void show()
	{
		cout << "Roll number = " << mo << endl;
		cout << "Name = " << name << endl;
		for(int i=1;i<=3;i++)
		cout << "Marks " << i << ":" << marks[i] << endl;
	}
	int total()
	{
		int t;
		for(int i=1;i<=3;i++)
		t=t+marks;
		return t;
	}
	float average ()
	{
			int t;
		for(int i=1;i<=3;i++)
		t=t+marks;
		return t/3;
	}
};
int main()
{
	result r;
	r.input();
	r.show();
	cout << "Total marks : " << r.total() << endl;
	cout << "Average marks : " << r.average() << endl;
	return 0;
}

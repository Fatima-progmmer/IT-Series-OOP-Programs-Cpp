#include<iostream>
using namespace std;
class person
{
	private:
		char name[50];
	public:
		void get()
		{
			cout << "Enter your name:";
			cin >> name;
		}
		void show()
		{
			cout << "Your name =" << name << endl;
		}
};
int main()
{
	person *ptr[5];
	int j;
	for(j=0;j<5;j++)
	{
		ptr[i]=new person;
		ptr->get();
	}
	for(i=0;i<5;i++)
	ptr[i]->show();
 	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


#include<iostream>
using namespace std;
class person
{
	protected:
		int id;
		char name[50],address[100];
		public:
			person()
			{
				id=0;
				name[0]='\0';
				address[0]='\0';
			}
			void getinfo()
			{
				cout << "Enter your id:";
				cin >> id;
				cout << "Enter your name:";
				gets(name);
				cout << "Enter your address:";
				gets(address);
			}
			void showinfo()
			{
				cout << "\nYour personal information as follows:\n";
				cout << "id=" << id << endl;
				cout << "Name=" << name << endl;
				cout << "Address=" << address << endl;
			}
};

class student:public person
{
	private:
		int mo,marks;
		public:
			student()
			{
				person::person();
				mo=marks=0;
			}
			void getedu()
			{
				cout << "Enter your roll no=";
				cin >> mo;
				cout << "Enter your marks:";
				cin >> marks;
			}
			void showedu()
			{
				cout << "\nYour education information is as follows:\n";
				cout << "Roll No=" << mo << endl;
				cout << "Marks=" << marks << endl;
			}
};
int main()
{
	student s;
	s.getinfo();
	s.getedu();
	s.showinfo();
	s.showedu();
 	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


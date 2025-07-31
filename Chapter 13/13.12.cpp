#include<iostream>
using namespace std;
class Book
{
	private:
		int pg,pr;
		char title[50];
		public:
			void get()
			{
				cout << "Enter title :";
				gets(title);
				cout << "Enter pages :";
				cin >> pg;
				cout << "Enter price :";
				cin >> pr;
			}
			void show()
			{
				cout << "Book name :" << title << endl;
				cout << "Book pages :" << pg << endl;
				cout << "Book price :" << pr << endl;
			}
};
int main()
{
	Book b1;
	b1.get();
	Book b2(b1); //b2 and b3 using default copy constructor
	Book b3=b1; // they intailized the value of b1 in b2 and b3
	cout << "\nThe details of b1 :" << endl;
	b1.show();
	cout << "\nThe details of b2 :" << endl;
	b2.show();
	cout << "\nThe details of b3 :" << endl;
	b3.show();
	return 0;
}

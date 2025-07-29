#include<iostream>
using namespace std;
struct Book
{
	int id;
	int pages;
	float price;
}
int main()
{
	Book b1,b2;
	cout << "Enter id,pages and price of book:";
	cin >> b1.id >>b1.pages >> b1.price;
	cout << "Enter id,pages and price of the book :";
	cin >> b2.id >> b2.pages >> b2.price;
	cout << "\nTHe most costly book is as follows :\n";
	if(b1.price>b2.price)
	{
		cout << "BookID :" << b1.id << endl;
		cout << "Pages : "<< b1.pages << endl;
		cout << "Price :" << b1.price << endl;
	}
	else
	{
		cout << "BookID :" << b2.id << endl;
		cout << "Pages : "<< b2.pages << endl;
		cout << "Price :" << b2.price << endl;	
	}
 	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


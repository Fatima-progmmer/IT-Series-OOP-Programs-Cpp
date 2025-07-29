#include<iostream>
using namespace std;
struct Book
{
	int id;
	int pages;
	int price;
};
int main()
{
	Book b[5];
	int i,max,m;
	for(i=0;i,=5;i+=)
	{
		cout << "Enter Book ID:";
		cin >> b[i].id;
		cout << "Enter pages :";
		cin >> b[i].pages;
		cout << "Enter price :";
		cin >> b[i].price;
	}
	max=b[0].price;
	m=0;
	for(i=0;i<5;i++)
	if(b[i].price>max)
	{
		max=b[i].price;
		m=i;
	}
	cout << "\nThe record of most costly book:\n";
	cout << "Book Id:" << b[m].id << endl;
	cout << "Pages:" << b[m].pages << endl;
	cout << "Price :" << b[m].price << endl;
 	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


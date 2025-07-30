#include<iostream>
using namespace std;
struct Book
{
	char author[30];
	int pages;
	int price;
};
int main()
{
	Book rsc,*ptr;
	ptr=&rec;
	cout << "Enter author name:";
	cin.get(ptr->author,30);
	cout << "Enter pages:";
	cin >>ptr->pages;
	cout << "Enter price:";
	cin >> ptr->price;
	cout << "Author:" << ptr->author << endl;
	cout << "Pages:" << ptr->pages << endl;
	cout << "Price:" << ptr->price << endl;
 	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


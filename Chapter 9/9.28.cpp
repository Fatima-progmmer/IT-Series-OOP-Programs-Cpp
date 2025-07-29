#include<iostream>
using namespace std;
struct Book
{
	char Pages;
	float price;
};
Book check(Book x,Book y);
int main()
{
	Book a,b,c;
	cout << "Enter pages and price :";
	cin >> a.Pages >> a.price;
	cout << "Enter pages and price :";
	cin >> b.Pages >> b.price;
	c=check(a,b);
	cout << "The more costly book Is:\n";
	cout << "pages:" << c.Pages << endl;
	cout << "Price :" << c.price << endl;
 	return 0;
}


Book check(Book x,Book y)
{
	if(x.price>y.price)
	return x;
	else  return y;
}
//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


#include<iostream>
using namespace std;
union shirt
{
	char size;
	int chest;
	int heigth;
};
int main()
{
	shirt mine;
	cout << "\nsize of union :" << sizeof(mine);
	cout << "\nWhat size (S/M/L)?";
	cin >> mine.size;
	cout << "\nThe size is :" << mine.size;
	cout << "\nThe chest measurement is:" << mine.chest;
	cout << "\nThe height measurement is " << mine.heigth;
	cout << "\n\nWhat is the chest measurement ?";
	cin >> mine.chest;
	cout << "\nThe size is :" << mine.size;
	cout << "\nThe chest measurement is:" << mine.chest;
	cout << "\nThe height measurement is " << mine.heigth;
	cout << "\n\nWhat is the heigth measurement ?";
	cin >> mine.heigth;
	cout << "\nThe size is :" << mine.size;
	cout << "\nThe chest measurement is:" << mine.chest;
 	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


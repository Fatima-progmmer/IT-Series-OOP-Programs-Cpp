#include<iostream>
using namespace std;
int main()
{
	int number,option;
	char letter;
	cout << "1.Covert ASCII value to character" << endl;
	cout << "2.Convert character to ASCII value" << endl;
	cout << "Enter your choice :";
	cin >> option;
	switch(option)
	{
		case 1:
			cout << "enter a number :";
			cin >> number;
			cout << "Corrsesponding value is " << char(number) << endl;
			break;
			case 2;
			cout << "Enter a letter :";
			cin >> letter;
			cout << "ASCII value of letter is :";
			break;
			deafult:
				cout << "Invalid Option";
	}
return 0;
}


#include<iostream>
using namespace std;
int main()
{
	int choices,months;
	double charges;
	cout << "\t\tHealth Club Membership menu\n\n";
	cout << "1.Standard adult membership";
	cout << "2.Child membership";
	cout << "3.Senior citizen membership";
	cout << "4.Quit thr program\n\n";
	cin >> choice;
	if((chooice>=1)&&(choice<=3))
	{
		cout << "for how many months?";
		cin >> months;
		switch(choice)
		{
			case 1:
				charges =months*50;
				break;
			case 2:
				charges =months*20;
			case 3:
				charges =months*30;
		}
					cout << "The total charges are Rs." << charges << endl;
	}
	else if(choice!=4)
	{
		cout << "The valid choices are 1 to 4.\n";
		cout << "Run the program again and again and select one of these.\n";
	}
}

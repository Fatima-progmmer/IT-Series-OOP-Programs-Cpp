#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
void line();
void star();
struct cricketer
{
	char name[15];
	int runs;
	int innings;
	int tno;
	float avg;
};
int main()
{
	int runs,innings,i;
	float avg;
	cricketer rec[5];
	cout << "\nEnter 5 records including following details\n";
	cout << "1)      Players's Name\n";
	cout << "2)      Runs\n";
	cout << "3)      Innings\n";
	cout << "4)      Times Not out\n";
	for(i=0;i<5;i++)
	{
		cout << "\nEnter Player Name:";
		cin >>rec[i].name;
		cout << "\nEnter Runs:";
		cin >>rec[i].runs;
		cout << "\nEnter Innings";
		cin >>rec[i].innings;
		cout << "\nEnter Rimes not out";
		cin >>rec[i].tno;
	}
	cout << "\n\n\n\n";
	cout << setw(49) << "CRICKETERS TABLES\n";
	line();
	cout << setw(15) << "Players name " << setw(15) << "Runs " << setw(15) << "Innings ";
	cout << setw(18) << "Times not out " << setw(12) << "Average\n";
	line();
	for(i=0;i<5;i++)
	{
		cout << setw(15) << rec[i].name << setw(15) << rec[i].runs <<setw(12) << rec[i].innings;
		cout << setw(18) << rec[i].tno << setw(16) << rec[i].avg << endl;
	}
	line();
	cout << endl << endl << endl;
	star();
	cout << setw(43) << "Finish\n";
	star();
 	return 0;
}


void line()
{
	for(int i=0;i<41;i++)
	cout << "--";
	cout << "\n";
}


void star()
{
	for(int i=0;i<41;i++)
	cout <<"**";
	cout << "\n";
}
//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


#include<iostream>
using namespace std;
struct time
{
	int hours;
	int minutes;
	int seconds;
}time1;
int main()
{
	voidconvert(time*,long);
	cout << "Enter total number of seconds :";
	cin >> sec;
	convert(&time1,sec);
	cout << "\nThe time in hh mm ss format is:";
	cout << "\nHours:" <<time1.hours << endl;
	cout << "\nMinutes:" <<time1.minutes << endl;
	cout << "\nSeconds:" <<time1.hours<< endl;
 	return 0;
}

void convert(time*temp,long sec)
{
	temp->seconds=sec%60;
	long x=sec/60;
	temp->minutes=x%60;
	temp->hours=x/60;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


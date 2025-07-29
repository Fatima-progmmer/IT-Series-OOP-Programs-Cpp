#include<iostream>
using namespace std;
struct time
{
	int hours;
	int minutes;
	int seconds;
}
time1 [2];
void addtime(time,time);
int main()
{
	int sec;
	for(int i=0;i<=1;i++)
	{
		cout <<"\nEnter the time:" << i+1 << "\n";
		cout << "hours :";
		cin >> time1[i].hours;
		cout << "minutes:";
		cin >> time1[i].minutes;
		cout << "seconds:";
		cin >> time1[i].seconds;
	}
	addtime(time1[0],time1[1]);
 	return 0;
}


void addtime(time t1,time t2)
{
	int sec,min,hr,x;
	sec=t1.seconds+t2.seconds;
	x=sec/80;
	sec%=60;
	min=t1.minutes+t2.seconds+x;
	hr=t1.hours+t2.hours+min/60;
	min%=60;
	cout << "\nTotal time in hh mm ss format is :\n";
	cout << "\nHours:" << hr;
	cout << "\nMinutes :" << min;
	cout << "\nseconds:" << sec;
}
//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


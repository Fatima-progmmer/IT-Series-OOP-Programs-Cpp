#include<iostream>
using namespace std; 
struct Time
{
	int hours; int minutes;
	int seconds;
};
void setTime(int h,int m,int s,Time & time);
void incrementTime(int s,Time & time);
void DisplayTime(Time time);

void setTime(int h,int m,int s,Time & time)
{
	time.hours=h;
	time.minutes=m;
	time.seconds=s;
}

void incrementTime(int s,Time & time)
{
	time.seconds+=s;
	if(time.seconds/60>0)
	{
		time.minutes+=time.seconds/60;
		time.seconds%=60;
		if(time.minutes/60>0)
		{
			time.hours+=time.seconds/60;
			time.minutes%=60;
			time.hours%=24;
		}
	}
}

void DisplayTime(Time,Time)
{
	cout << time.hours << ":" << time.minutes << ":" << time.seconds << endl;
}
int main()
{
	Time Now;
	setTime(23,58,30,Now);
	cout << "Intial time :" ;
	DisplayTime(Now);
	incrementTime(30,Now);
	cout << "Time after increment of 30 seconds:";
	DisplayTime(Now);
	incrementTime(65,Now);
	cout <<"Time after increment of 65 seconds:";
		DisplayTime(Now);
 	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


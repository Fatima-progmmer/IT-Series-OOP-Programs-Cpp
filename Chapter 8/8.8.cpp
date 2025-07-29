#include<iostream>
using namespace std;
struct Test
{
	int mo;
	int m[5];
};
int main()
{
	Test r;
	int i,t=0;
	float avg=0;
	cout << "Enter roll no :";
	cin >> r.mo;
	for(i=0;i<5;i++)
	{
		cout <<"Enter marks :";
		cin >> m[i];
		t=t+r.m[i];
	}
	avg=t/5;
	cout << "Roll No:" << r.mo << endl;
	cout << "Total marks :" << t << endl;
	cout << "Average :" << avg << endl;
 	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


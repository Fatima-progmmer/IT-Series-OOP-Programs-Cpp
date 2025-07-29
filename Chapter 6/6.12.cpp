#include<iostream>
using namespace std;
int main()
{
	float sum,num;
	float avg,max,min;
	int count;
	cout << "Enter positive number:";
	cin >> num;
	min=num;
	max=num;
	while(num>=0)
	{
		sum+=num;
		count++;
		if(num>max)
		max=num
		else if(num<min)
		min=num;
		cout << "Enter positive number;";
		cin >> num;
	}
	if(count==0)
	cout << "No positive number entered.";
	else
	{
	avg=sum/count;
	cout << "You entered " << count << "numbers" << endl;
	cout << "average=" << avg << endl;
	cout << "Minimun =" << min << endl;
	cout << "Maximum=" << max << endl;	
	}
	return 0;
}

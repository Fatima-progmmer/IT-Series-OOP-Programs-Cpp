#include<iostream>
using namespace std;
int main()
{
	int i,j,k,max,min,tot=0;
	float avg;
	int temp[3][7][4];
	for(i=0;i<3;i++)
	for(j=0;j<7;j++)
	for(k=0;k<4;k++)
	{
		cout << "Enter temperature  :";
		cin >> temp[i][j][k];
	}
	max=min=temp[0][0][0];
	for(i=0;i<3;i++)
	for(j=0;j<7;j++)
	for(k=0;k<4;k++)
	{
		tot=tot+temp[i][j][k];
		if(temp[i][j][k]> max)
		max=temp[i][j][k];
		if(temp[i][j][k]< max)
		min=temp[i][j][k];
	}
	avg =tot/84;
	cout << "maximum temperature of month :" << max << endl;
	cout << "Minimum temperature of month : " << min << endl;
	cout << "Average temperature of month :" << avg << endl;
		return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


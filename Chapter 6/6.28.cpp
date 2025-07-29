#include<iostream>
using namespace std;
int main()
{
	int i,n,x;
	float sum=0,den;
	cout <<"Enter the value of x:";
	cin >> x;
	cout <<"Enter the range :";
	cin >> n;
	for(i=0;i<n;i++)
	{
		den=pow(x,i);
		sum=sum+(1/den);
	}
	coutr << "Sum of series :" << sum;
	return 0;
	
}


#include<iostream>
using namespace std;
int func(int a[],int n,char s='+')
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		if(s=='+')
		{
			if(a[i]>0)
			sum+=a[i];
		}
		else
		{
			if(a[i]<0)
			sum+=a[i];
		}
	}
	return sum;
}
int main()
{
	int arr[20],dn;
	cout << "Enter dimensional:";
	cin >> dn;
	for(int i=0;i<dn;i++)
	{
		cout << "Enter any positive/negative :";
		cin >> arr[i];
	}
	int s=func(arr,dn);
	int s2=func(arr,dn,'-');
	cout << "\nThe sum of the positive integers:" << s;
	cout << "\nThe sum of all negative integers:"<< s2;
 	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


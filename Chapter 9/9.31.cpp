#include<iostream>
using namespace std;
int sum(int a[]);
int sum(int a[],char ch);
int main()
{
	int sum[10];
	cout << "\nEnter 10 integers:";
	for(int i=0;i<10;i++)
	cin >> num[i];
	int s= sum(num);
	cout << "\nThe sum of all integers=" << s;
	s=sum(num,'E');
		cout << "\nThe sum of all even integers=" << s;
	s=sum(num,'O');
		cout << "\nThe sum of all odd integers=" << s;
	s=sum(num,'X');
	cout << "\nNo sum for wrong choice.The result =" << s;
 	return 0;
}


int sum(int arr[])
{
	
	int s=0;
	for(int i=0;i<10;i++)
	s=s+arr[i];
	return s;
}

int sum(int arr[],char a)
{
	int se=0,so=0,s=0;
	switch(a)
	{
		Case 'e':
		case 'E':
			for(int i=0;i<10;i++)
			{
				if arr[i]%2==0
				se=se+arr[i];
			}
			s=se;
			break;
					Case 'o':
		case 'O':
			for(int i=0;i<10;i++)
			{
				if arr[i]%2==0
				so=so+arr[i];
			}
			s=so;
			break;
			default :
				s=0;
	}
	return s;
}
//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


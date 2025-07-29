#include<iostream>
using namespace std;
int even(int RR[5])
{
int j,e;
e=0;
for(j=0;j<5;j++)
if(arr[j]%2==0)
e++;
return e;
}
int main()
{
	int num[5];
	int i,n;
	cout << "Enter five integers:" << endl;
	for(i=0;i<5;i++)
	cin >> num[i];
	n=even(num);
	cout << "The array contains " << n << " even numbers " << endl;
 	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


#include<iostream>
using namespace std;
int main()
{
	int s,e,n;
	cout << "Enter starting number:";
	cin >> s;
	cout << "Enter ending number:";
	cin >> e;
	n=s;
	while(n<=e)
	{
		if(n%2==0)
		cout << n << endl;n++;
	}
	return 0;
}

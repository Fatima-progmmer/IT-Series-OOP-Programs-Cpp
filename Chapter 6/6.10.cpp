#include<iostream>
using namespace std;
int main()
{
	int n,oddsum=0,evensum=0;
	cout << "Enter a positive number:";
	cin >> n;
	while(n>=0)
	{
		if(n%==2)
		evensum=evensum+n;
		else
		oddsum=oddsum+n;
		n--;
	}
	cout << "the sum of digits is " << evensum << endl;
	cout << "The sum of odd digits is " << oddsum << endl;
	return 0;
}

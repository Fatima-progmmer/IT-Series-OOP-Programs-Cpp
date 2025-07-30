#include<iostream>
using namespace std;
void exchange(int *m,int *n);
int main()
{
	int n1,int n2;
	cout << "Enter twp integers:";
	cin >> n1 >> n2;
	cout << "Values before swapping :\n";
	cin << "n1=" << n1 << endl;
	cout << "n2= " << n2 << endl;
	exchange(&n1,&n2);
	cout << "Values after swapping :\n";
	cin << "n1=" << n1 << endl;
	cout << "n2= " << n2 << endl;
 	return 0;
}


void exchange(int *m,int *n)
{
	int temp;
	temp=*m;
	*m=*n;
	*n=temp;
}
//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


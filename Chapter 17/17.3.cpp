#include<iostream>
using namespace std;
template <class T>
T findMin(T arr[],int n)
{
	int i;
	T min;min=arr[0];
	for(i=0;i<n;i++)
	{
		if(min>arr[i])
		min=arr[i];
	}
	return(min);
}
int main()
{
	int iarr[]={5,4,3,2,1};
	char carr[]={'z','y','c','b','a'};
	double darrr[]={3.3,5.5,2.2,1.1,4.4};
	cout << "Generic function to find maximum from array" << endl;
	cout << "Integer Minimum is:" << findMin(iarr,5) << endl;
	cout << "Character Minimum is :" << findMin(carr,5) << endl;
	cout << "Double Minimum is :" << findMin(darr,5) << endl;
 	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


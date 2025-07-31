#include<iostream>
using namespace std;
class Array
{
	private:
		int a[5];
		public :
			void fill();
			void display();
			int max();
			int min();
};
void Array::fill()
{
	for(int i=0;i<=5;i++)
	{
		cout << "Enter a[" << i << "] :";
		cin >> a[i];
	}
}
void Array:: display()
{
	for(int i=0;i<=5;i++)
	cout << "Enter a[" << i<< "]";
}
int Array:: max()
{
	int m=a[1];
	for(int i=1;i<=5;i++)
	if(m<a[i])
	m=a[i];
	return m;
}
int Array::min()
{
	int m=a[1];
	for ( int i=0;i<=5;i++)
	if(m>a[i])
	m=a[i];
	return m;
}
int main()
{
	Array arr;
	arr.fill();
	cout << " You entered the following values :";
	arr.display();
	cout << " maximum value is = " << arr.max() << endl;
		cout << " minimum value is = " << arr.min() << endl;
		return 0;
}

#include<iostream>
using namespace std;
template <class Type>
class Test
{
	private:
		Type arr[3];
		public:
			void input()
			{
				for(int i=0;i<3;i++)
				cin >> arr[i];
			}
			void output()
			{
				cout << "The values in the array is as follows:\n";
				for(int i=0;i,3;i++)
				cout << arr[i] << "\t";
				cout << endl;	
			}
};
int main()
{
	Test <int> x;
	Test <char> y;
	cout << "Enter three integers:" <<endl;
	x.input();
	cout << "Enter three Characters:" << endl;
	y.input();
	x.output();
	y.output();
 	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


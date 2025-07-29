#include<iostream>
#include<fstream>
#include<iomaip>
using namespace std;
int main()
{
	int degree=0;
	double radians;
	cout.setf(ios::fixed);
	cout.precision(6);
	cout << "Degree of radius \n";
	while(degrees<=360)
	{
		radians=degree*PI/180;
		cout << setw(6) << degrees << setw(10) << radians <<endl;
		degrees+=10; 
	}
}return 0;

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int n;
	char ch;
	double d;
	ifstream file("text.txt");
	if(!file)
	{
		cout << "file opening eror " << endl;
		exit(1);
	}
	file >> n >> ch >> d;
	cout << "The contents as follows :" << endl;
	cout << n << endl << ch << endl << d << endl;
	file.close();
 	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


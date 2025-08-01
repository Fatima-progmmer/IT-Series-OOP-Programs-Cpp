#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int n=10;
	char ch='*';
	double d=38.125;
	ofstream("text.txt");
	if(!file)
	{
		cout << "File opening error :";
		exit(1);
	}
	file << n << ' ' << ch << ' ' << d;
	file.close();
 	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


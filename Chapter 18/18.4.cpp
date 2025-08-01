#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char city[50];
	ifstream file("city.txt");
	if(!file)
	{
		cout << "Error in opening file ." ;
		exit(1);
	}
	cout << "The list of class ias as follows:" << endl;
	while(!file.eof())
	{
		file>>city;
		cout << city << endl;
	}
	file.close();
 	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


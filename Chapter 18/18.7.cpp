#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char ch;
	ifstream in("chars.txt");
	while(!in.eof())
	{
		in.get(ch);
		cout << ch << endl;
	}
	in.close();
 	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


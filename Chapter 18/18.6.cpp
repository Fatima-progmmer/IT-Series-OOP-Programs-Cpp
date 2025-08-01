#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char ch;
	ofstream out("chars.txt");
	for(int i=1;i<5;i++)
	{
		cout << "Enter a character :";
		cin >> ch;
		out.put(ch);
	}
	out.close();
	
	 	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


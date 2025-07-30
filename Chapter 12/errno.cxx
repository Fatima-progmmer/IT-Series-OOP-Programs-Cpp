#include<iostream>
#include<errno.h>
#include<conio.h>
#include<string>
using namespace std;
int main()
{
	char *buffer;
	buffer = strerror(errno);
	cout << "Error " << buffer << endl;
	return 0;
}
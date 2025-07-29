#include<iostream>
using namespace std;
int main()
{
	int counts=0;
	int count=1;
	cout << "Enter a sentence :" << endl;
	char ch='a';
	while(ch!='\r')
	{
		ch=getche();
		if(ch=='')
		count++;
		else
		counts++;
	}
	cout << "/nWords=" << count << endl;
	cout << "Characters=" << counts << endl;
}

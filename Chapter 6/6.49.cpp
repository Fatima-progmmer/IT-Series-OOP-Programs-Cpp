#include<iostream>
using namespace std;
int main()
{
	int x,y,z,count;
	cout << "Enter any character :";
	cin >> choice;
	count=1;
	for(x=0;x<5;++x)
	{
		cout << endl;
		for(y=0;y<5*2-1;++y)
		if(y==x||y==((5*2-1)-count))
		cout << choice;
		else
		cout << " ";
		++count;
	}
	return 0;
}

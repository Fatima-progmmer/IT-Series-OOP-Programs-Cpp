#include<iostream>
#include<ctype>
using namespace std;
int main()
{
	char ch;
	int t,v;
	t=v=0;
	ifsream in("chars.txt");
	while(!in.eof(ch))
	{
		in.get(ch);
		ch=tolower(ch);
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		v++;
		t++;
		cout << ch << endl;
	}
	cout << "Total Characters:" << t << endl;
	cout << "Total vowels:" << v << endl;
	in.close();
	return 0;
}

\\coded by Tanzeela
  \\Do again and again

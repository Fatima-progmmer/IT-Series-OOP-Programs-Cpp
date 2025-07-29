#include<iostream>
using namespace std;
int main()
{
	char c;
	cout << "Enter an alphabet:";
	cinb >> c;
	switch(c)
	{
		case 'a':
		case 'A':
			cout << "You entered vowel .";
			break;
					case 'e':
		case 'E':
			cout << "You entered vowel .";
			break;
					case 'I':
		case 'i':
			cout << "You entered vowel .";
			break;
					case 'O':
		case 'o':
			cout << "You entered vowel .";
			break;
					case 'u':
		case 'U':
			cout << "You entered vowel .";
			break;
			default:
				cout << "Not vowel";
	}
	return 0;
}

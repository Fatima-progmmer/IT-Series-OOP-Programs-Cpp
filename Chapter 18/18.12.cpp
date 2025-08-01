#include<iostream>
using namespace std;
struct email
{
	char name[20];
	char id[30];
};
int main()
{
	email user;
	email check;
	cout << "Enter a name:";
	cin >> user.name;
	cout << "Enter The email address :";
	cin >> user.id;
	ofstream out("email.txt",ios::out||ios::binary);
	out.write((char*)&user,sizeof(struct email))
	out.close();
	cout << endl << "Contents of file are :";
	ifstream in("email.txt",ios::Init||ios::binary)
	in.read((char*)&check,sizeof(struct email));
	cout << endl <<check.name;
	cout << endl << check.id;
	in.close();
	return 0;
}

\\coded by Tanzeela
  \\Do again and again


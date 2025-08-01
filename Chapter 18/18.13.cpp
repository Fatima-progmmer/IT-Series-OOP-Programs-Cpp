#include<iostream>
using namespace std;
class Country
{
	private:
		int id;
		char name[50];
	public :
		void get()
		{
			cout << "Enter country id:";
			cin >> id;
			cout << "Enter country name:";
			cin >> name;
		}
		void show()
		{
			cout << "Country ID:" << id << endl;
			cout << "Country Name:" << name << endl;
		}
};
int main()
{
	country name;
	ofstream out("country.txt",ios::binary);
	on.get();
	out.write((char*)&cn,sizeof(cn));
	out.close();
	return 0;
}

\\coded by Tanzeela
  \\Do again and again


#include<iostream>
using namespace std;
class country
{
	private:
		int id;
		char name[50];
	public:
		void get()
		{
			cout << "Enter country id:" ;
			cin >> id;
			cout << "Enter country name:";
			cin >> name;
		}
};
int main()
{
	country cn;
	ifstream in("country.txt",ios::app);
	in.read((char*)&cn,sizeof(cn));
	cn.show();
	in.close();
	return 0;
}

\\coded by Tanzeela
  \\Do again and again


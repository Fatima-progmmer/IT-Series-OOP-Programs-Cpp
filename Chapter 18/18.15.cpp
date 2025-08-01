#include<iostream>
using namespace std;
class PhoneBook
{
	char name[20],phno[6];
	public:
		void get();
		void showdata();
		char *getname();
		{
			return name;
		}
		char *getphno()
		{
			return phno;
		}
		void update(char *nm,char *telno)
		{
			strcpy(name,nm);
			strcpy(phno,telno);
		}
};
void PhoneBook::get()
{
	cout << "Enter name:";
	cin >> name;
	cout << "Enter Phone no:";
	cin >> phno;
}
void PhoneBook::showdata()
{
	cout << "\n" << setw(15) << name;
	cout << setw(8) << phno;
}
int main()
{
	PhoneBook rec;
	fstream file;
	file.open("phone.dat" ,ios::ate|ios::in|ios::out|ios::binary);
	char ch,nm[20],telno[6];
	int choice,found=0;
	while(1)
	{
		cout << "\n***** Phone Book *****\n";
		cout << "1)Add New Record\n";
		cout << "2)Display all Record\n";
		cout << "3)Search Telephone NO" << endl;
		cout << "4)Update Telephone No" << endl;
		cout << "6)Exit " << endl;
		cout << "Chosse ypir choice :" ;
		cin >> choice;
		switch(choice)
		{
			case 1:
				rec.get();
				cin.get(ch);
				file.write((char*)&rec,sizeof(rec));
				break;
			case 2:
				file.seekg(0,ios::beg);
				cout << "\n\nRecords in Phone book " << endl;
				while(file)
				{
					file.read((char*)&rec,sizeof(rec));
					if(!file.eof())
					rec.showdata();
				}
		file.clear();
		break;
		case 3:
			cout << "Enter name :";
			cin >> nm;
			file.seekg(0,ios::beg);
			found=0;
			while(file.read(char*)&rec,sizeof(rec))
			{
				if(strcmp(nm,rec.get())==0)
				{
					found=1;
					rec.showdata();
				}
			}
			file.clear();
			if(found==0)
			cout << "\n\n---Record Not found---" ;
			break;
			case 4:
				cout << "Enter telephone No:" ;
				cin >> telno;
				file.seekg(0,ios::beg);
				found=0;
				while(file.read((char*)&rec,sizeof(rec)))
				{
					if(strcmp(telno,rec.getphno())==0)
					{
						found=1;
						rec.showdata();
					}
				}
				file.clear();
				if(found==0)
				cout << "\n\n---Record not found---\n";
				break;
				case5;
				cout << "Enter name:" ;
				cin >> nm;
				file.seekg(0,ios::beg);
				found=0;
				int cnt=0;
				while(file.read(char*)&rec,sizeof(rec));
				{
					cnt++;
					if(strcmp(nm,rec.get())==0)
					{
						found=1;
						break;
					}
				}
				file.clear();
	if(found==0)
	{
	cout << "Record not found ";
	else
	{
		int location=(cnt-1)*sizeof(rec);
		cin.get(ch);
		if(file.eof())
		file.clear();
		cout << "Enter New telephone no:" :
			cin >> telno;
			file.seekp(location);
			rec.update(nm.telno);
			file.write((char*)&rec,sizeof(rec));
			file.flush();
		}
		beak;
		case 6:
			goto out;
		}	
	}
	out:
	file.close();
	return 0;
}

//coded by Tanzeela
  //Do again and again


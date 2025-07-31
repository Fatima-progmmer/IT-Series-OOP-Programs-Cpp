#include <iostream>
using namespace std;
class travel
{
	private:
		int km,hr;
		public:
			travel()
			{
				km=hr=0;
			}
			void get()
			{
				cout << "Enter kilometers :" ;
				cin >> km;
				cout << "Enter hours :";
				cin >> hr;
			}
			void show()
			{
				cout << "You entered " << km << " in " <<hr <<" hours. " << endl;
			}
			void add(travel p)
			{
				travel t;      //Data member of temporary object t =t.km and t.hr
				t.km =km +p.km;  //Data member of temporary object p =p.km and p.hr
				t.hr = hr + p.hr;   //data member of calling object my =km and hr
				cout << "Total travelling is " << t.km << " kilometers in " << t.hr << " hours " << endl;
			}
};
int main()
{
	travel my,your;
	my.get();
	my.show();
	your.get();
	your.show();
	my.add(your);
	return 0;
}

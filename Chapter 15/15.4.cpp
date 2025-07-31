#include<iostream>
using namespace std;
class parent
{
//	private :
//	      int i;
	protected:
		int n;
		public:
			parent(int p)
			{
				n=p;
			}
			void show()
			{
				cout << "n=" << n << endl;
			}
};
class child:private parent
{
	private:
		char ch;
		public:
			child(char c,int m):parent(m)
			{
			ch=c;
//			i=10;	
			}
			void show()
			{
				parent::show();
				cout << "ch=" << ch << endl;
			}
};
int main()
{
	child obj('@',100);
	obj.show();
 	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


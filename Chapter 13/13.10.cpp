#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;
class TV
{
	public:
		TV(char brand[],char Mod[],float Price);//constructor are created and arugment are passed
		void Change(char Brand[],char Mod[],float Price); //new function
		void display(); //new function
		private:
			char BrandName[20];
			char Model[10];
			float Retailprice;
};
TV::TV(char brand[],char Mod[],float Price)
// ya line es chez ko show kar rhe hai k
// TV name ki aq class hai us mn tv name k aq constructor k arugment ki value ab defimne kar rhy hain.
//:: this operator show the relation we also use a function instead od constructor.
{
strcpy (BrandName,brand);
strcpy(Model,Mod);
Retailprice=Price;
}
void TV::Change(char Brand[],char Mod[],float Price) //first use return time than class name and fuction name with arugments
{
strcpy (BrandName,Brand);
strcpy(Model,Mod);
Retailprice= Price;
}
void TV::display()
{
	cout << "BRand name :" << BrandName << endl;
	cout << "Model :" << Model << endl;
	cout << "price :" << Retailprice << endl;
}
int main()
{
	TV test("Sony","HDTV",25000); //value pass to constuctor
	cout << "Displating the object " << endl;
	test.display();
	test.Change("Toshiba","STDV",22000); // arugment pass to fuction
	cout << "Displaying object after changing :" << endl;
	test.display();
	return 0;
}

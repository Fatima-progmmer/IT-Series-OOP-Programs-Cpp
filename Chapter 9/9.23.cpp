#include<iostream>
using namespace std;
struct pop
{
	char name[50];
	float pop;
};
void fun(pop x,pop y);
int main()
{
	pop a,b;
	cout << "Enter name and population (in millions):";
	cin >> a.name >> a.pop;
	cout << "Enter name and population (in millions)";
	cin >> b.name >> b.pop;
	fun(a,b);
 	return 0;
}


void fun(pop x,pop y)
{
	cout << "The countery with more population :" << endl;
	if(x.pop>y.pop)
	{
		cout << "Name :" << x.name << endl;
		cout << "Populkation :" << x.pop << " millions " << endl;
	}
else
{
		cout << "Name :" << y.name << endl;
		cout << "Populkation :" << y.pop << " millions " << endl;	
}
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


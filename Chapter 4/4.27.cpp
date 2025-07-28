#include<iostream>
#include<iomainp>
using namespace std;
int main()
{
	float e1,e2,g1,g2,p1,p2;
	cout << "Enter eletricity bill:";
	cin >> e1;
	cout << "Enter gas bill: ";
	cin >> g1;
	cout << "Enter petrol bill:";
	cin >> p1;
	e2=e1*1.1;
	p2=p1*1.1;
	g2=g1*1.1;
	cout << "New eletricity bill : " << setprecision(2) << e2 << endl;
	cout << "New Perteol bill :" << setprecision(2) << p2 << endl;
	cout << "New Gas bill:" << setprecision(2) << g2 << endl;

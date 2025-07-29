#include<iostream>
#include<fstream>
using namespace std;
struct payRoll
{
	int empNumber;
	char fname[50],sname[50];
	double hours,payrate,grossPay;
};
int main()
{
	payRoll employee;
	cout << "Enter the employee''s number:";
	cin >> employee.empNumber;
	cout << "Enter employee's First number :";
	cin >> employee.fname;
	cout << "Enter employee's second name:";
	cin >> employee.sname;
	cout << "Enter number of hours worked:";
	cin >> empolyee.hours;
	cout << "Enter hourly Pat rate:";
	cin >> employee.payrate;
	employee.grossPay=employee.hours*employee.payrate;
	cout << "\nEmployee's Payroll DAta:\n";
	cout << "Name:" << employee.fname << " " << employee.sname << endl;
	cout << "Number :" << employee.empNumber << endl;
	cout << "Hours worked :" << employee.hours << endl;
	cout << "Hourly Pay rate :" << employee.payrate << endl;
	cout << "Gross Pay : Rs ." ;
	cout.setf(ios::fixed ,ios::floatfield);
	cout.setf(ios::showpoint);
	cout << setprecision(2) << emlpoyee.grossPay << endl;
	 	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again


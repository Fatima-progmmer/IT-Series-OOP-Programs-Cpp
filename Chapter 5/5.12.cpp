#include<iostream>
using namespace std;
int main()
{
	int score;
	cout << "Enter yourn test score :";
	cin >> score;
	if(score>=90)
	cout << "YOur grade is A";
	else if(score>=80)
	cout << "YOur grade is B";
	else if(score>=70)
	cout << "YOur grade is C";
	else if(score>=60)
	cout << "YOur grade is D";
	else
	cout << "YOur grade is F";
	return 0;
	
}

#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	float salary,grade;
	cout<<"Enter your salary"<<endl;
	cin>>salary;
	cout<<"Enter your GRADE"<<endl;
	cin>>grade;
	if (grade>15)
	cout<<"your total salary is="<<salary+salary/100*50;
	else
	cout<<"your total salary is="<<salary+salary/100*25;
}

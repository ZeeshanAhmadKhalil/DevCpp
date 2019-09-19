#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int salary,grade;
	cout<<"Salary=";
	cin>>salary;
	cout<<"Grade=";
	cin>>grade;
	if(grade>15)
	cout<<"Your total salary is "<<salary+salary/100*50;
	else 
	cout<<"Your total salary is "<<salary+salary/100*20;

}

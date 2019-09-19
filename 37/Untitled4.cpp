/* PROGRAMM NO 4 */

#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int basicSalary,grossSalary,dearness,rent;
	cout<<"What is your Salary			=";
	cin>>basicSalary;
	dearness=basicSalary/100*35;
	cout<<"The dearness allownce        ="<<dearness<<"\n";
	rent=basicSalary/100*25;
	cout<<"The house rent               ="<<rent<<"\n";
	cout<<"                         _____________________________________   ";
	cout<<"So, your total salary        ="<<dearness+rent+basicSalary;
}
	
	

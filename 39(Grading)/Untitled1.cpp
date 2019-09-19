#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	float a,b,c;
	cout<<"Enter your marks			";
	cin>>a;
	cout<<"Enter your total marks			";
	cin>>b;
	c=a/b*100;
	cout<<"________________________________________________________________________________\n";
	cout<<"Your %age is			\t"<<c<<"%\t";
	if(c>=90)
	cout<<"Grade A+";
	else if(c>=80)
	cout<<"Grade A";
	else if(c>=70)
	cout<<"Grade B+";
	else if(c>=60)
	cout<<"Grade B";
	else if(c>=50)
	cout<<"Grade C+";
	else if(c>=40)
	cout<<"Grade D";
	else if(c>=33)
	cout<<"Grade E";
	else if(c<=100)
	cout<<"Fail(No Grades)";
	
}

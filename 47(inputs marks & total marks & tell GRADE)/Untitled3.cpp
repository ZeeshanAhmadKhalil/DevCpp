#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	float a,b;
	cout<<"Enter your marks"<<endl;
	cin>>a;
	cout<<"Enter your total marks"<<endl;
	cin>>b;
	if ((a/b*100)>90)
	cout<<"your GRADE = A+";
	else if((a/b*100)>80)
	cout<<"your GRADE = A";
	else if((a/b*100)>70)
	cout<<"your GRADE = B+";
	else if((a/b*100)>60)
	cout<<"your GRADE = B";
	else if((a/b*100)>50)
	cout<<"your GRADE = C";
	else if((a/b*100)>45)
	cout<<"your GRADE = D";
	else if((a/b*100)>33)
	cout<<"your GRADE = E";
	else
	cout<<"you ARE fail ";
	
}

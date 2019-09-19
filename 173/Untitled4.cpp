#include<iostream>
#include<conio.h>
using namespace std;
char grade(float marks,float total)
{
	if(marks/total*100>=90&&marks/total*100<100)
	return 'A';
	else if(marks/total*100>=80&&marks/total*100<90)
	return 'B';
	else if(marks/total*100>=70&&marks/total*100<80)
	return 'C';
	else if(marks/total*100>=60&&marks/total*100<70)
	return 'D';
	else if(marks/total*100>=50&&marks/total*100<60)
	return 'E';
	else
	return 'F';
}
main()
{
	int marks,total;
	cout<<"Enter your marks & total marks"<<endl;
	cout<<"marks=";
	cin>>marks;
	cout<<"Total=";
	cin>>total;
	cout<<"Grade="<<grade(marks,total);
}

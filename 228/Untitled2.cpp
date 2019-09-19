#include<iostream>
#include<conio.h>
using namespace std;
char grade(float marks,float total)
{
	if(marks/total*100>90)
	return 'A';
	else if(marks/total*100>80)
	return 'B';
	else if(marks/total*100>70)
	return 'C';
	else if(marks/total*100>60)
	return 'D';
	else if(marks/total*100>50)
	return 'E';
	else if(marks/total*100<50)
	return 'F';
}
main()
{
	for(int a=1;a<6;a++)
	{
	float marks,total;
	cout<<"Marks=";
	cin>>marks;
	cout<<"Total=";
	cin>>total;
	cout<<"Grade="<<grade(marks,total)<<endl;
	}
}

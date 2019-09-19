#include<iostream>
#include<conio.h>
using namespace std;
float marks,total;
char grade()
{
	int per;
	per=marks/total*100;
	if(per>=90&&per<100)
	return 'A';
	else if(per>=80&&per<90)
	return 'B';
	else if(per>=70&&per<80)
	return 'C';
	else if(per>=60&&per<70)
	return 'D';
	else if(per>=50&&per<60)
	return 'E';
	else 
	return 'F';
	
}
main()
{
	cout<<"Marks=";
	cin>>marks;
	cout<<"Total=";
	cin>>total;
	cout<<"Grade="<<grade();
}

#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a,b,c,d,e,f,g,h,i;
	cout<<"enter a 4 digit no.\t";
	cin>>a;
	b=a/1000;//1st digit
	c=a%1000;//last 3 digits
	d=c/100;//2nd digit
	e=c%100;//last 2 digits
	f=e/10;//3rd digit
	g=e%10;//last digit.
	cout<<"The reversed no is\t"<<g<<f<<d<<b;
}

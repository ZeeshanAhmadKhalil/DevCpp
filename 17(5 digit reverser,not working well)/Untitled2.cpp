#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	short a,b,c,d,e,f,g,h,i;
	cout<<"input a numper of 5 digits";
	cin>>a;
	b=a/10000;//1st digit
	c=b%10000;//last 4 digits
	d=c/1000;//2nd digit
	e=d%1000;//last 3 digits
	f=e/100;//3rd digit
	g=e%100;//last 2 digits
	h=g/10;//4 th digit
	i=h%10;//last digit
	cout<<"Your number become"<<i<<h<<f<<d<<b;
}

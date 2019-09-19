#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a,b,c,num;
	cout<<"4 digit Number=";
	cin>>num;
	a=num/1000;
	num=num%1000;
	b=num/100;
	num=num%100;
	c=num/10;
	num=num%10;
	cout<<endl<<num<<c<<b<<a;
} 

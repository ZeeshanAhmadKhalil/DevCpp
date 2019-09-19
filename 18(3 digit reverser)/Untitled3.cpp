#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a,b,c,d,e;
	cout<<"enter a three digit  number\t";
	cin>>a;
	b=a/100;//1st digit
	c=a%100;
	d=c/10;//2nd digit
	e=c%10;//3rd digit
	cout<<"The inverted number is     \t"<<e<<d<<b;
	
}

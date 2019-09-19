#include<iostream>
#include<conio.h>
using namespace std;
mian()
{
	int a,b,c,d;
	a=100;
	b=a++;//b=100
	c=++a;//c=102
	d=a++;//d=102
	cout<<a<<"\t"<<b<<"\t"<<c<<"\t"<<d<<"\t";//a=103
}

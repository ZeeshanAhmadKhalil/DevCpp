/*PRE-INCREMENT,POST-INCREMENT & PRE-DECREMENT,POST-DECREMENT*/

#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a,b,c,d,e;
	a=45;
	b=a++;//b=45 & a= 46
	c=++a;//c=47
	d=a--;//d=47
	e=--a;//e=45
	cout<<a<<"\t"<<b<<"\t"<<c<<"\t"<<d<<"\t"<<e;//a=45
}

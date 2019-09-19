#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a=1,b=3,c=4,d=10,e=11,f=12;
	c=a++;
	b=c++;
	c=a++;
	e=++a;
	c=++b;
	f=++c;
	d=++f;
	a=++e;
	cout<<a<<b<<c<<d<<e<<f;
}

#include<iostream>
#include<conio.h>
using namespace std;
int a,b;//Global variables
add()
{
	cout<<a+b<<endl;
}
sub()
{
	cout<<a-b<<endl;
}
fac()
{
	int f=1;//Local variable
	for(int x=1;x<=a;x++)
	{
		f=f*x;
	}
	cout<<f<<endl;
}
table()
{
	for(int x=1;x<=10;x++)
	cout<<a<<"*"<<"="<<a*x<<endl;
}
cube()
{
	cout<<a*a*a<<endl;
}
square()
{
	cout<<a*a<<endl;
}
main()
{
	cout<<"Enter 2 no"<<endl;
	cin>>a>>b;
	cout<<"Sum=";
	add();
	cout<<"Difference=";
	sub();
	cout<<"Enter 1 no"<<endl;
	cin>>a;
	cout<<a<<"!=";
	fac();
	cout<<"Table of "<<a<<"is:"<<endl;
	table();
	cout<<a<<"^3=";
	cube();
	cout<<a<<"^2=";
	square();
}

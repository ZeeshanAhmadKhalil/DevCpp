#include<iostream>
#include<conio.h>
using namespace std;
int a,b;
add()
{
	cout<<"a+b="<<a+b<<endl;
}
sub()
{
	cout<<"a-b="<<a-b<<endl;
}
cube()
{
	cout<<"a^3="<<a*a*a<<endl;
}
square()
{
	cout<<"a^2="<<a*a<<endl;
}
table()
{
	for(int x=1;x<=10;x++)
	cout<<a<<"*"<<x<<"="<<a*x<<endl;
}
factorial()
{
	int f=1;
	for(int x=1;x<=a;x++)
	f=f*x;
	cout<<a<<"!="<<f<<endl;
}
main()
{
	cout<<"Enter 2 numbers"<<endl;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<"Sum of a & b is"<<endl;
	add();
	cout<<"Difference of a & b is"<<endl;
	sub();
	cout<<"cube of a is"<<endl;
	cube();
	cout<<"square of a is"<<endl;
	square();
	cout<<"Table of a is"<<endl;
	table();
	cout<<"Factorial of a is"<<endl;
	factorial();
}

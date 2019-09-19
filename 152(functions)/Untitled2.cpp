#include<iostream>
#include<conio.h>
using namespace std;
add(int a,int b)
{
	cout<<"Sum="<<a+b<<endl;
}
dif(int a,int b)
{
	cout<<"Difference="<<a-b<<endl;
}
squ(int a)
{
	cout<<"Square="<<a*a<<endl;
}
cub(int a)
{
	cout<<"cube="<<a*a*a<<endl;
}
fac(int a)
{
	int f=1;
	for(int b=1;b<=a;b++)
	{
		f=f*b;
	}
	cout<<a<<"!="<<f<<endl;
}
tab(int a)
{
	for(int b=1;b<=10;b++)
	{
		cout<<a<<"*"<<b<<"="<<a*b<<endl;
	}
}
max(int a,int b)
{
	if(a>b)
	cout<<"Max no="<<a<<endl;
	else if(b>a)
	cout<<"Max no="<<b<<endl;
	else
	cout<<"Numbers are equal"<<endl;
}
main()
{
	int x,y;
	cout<<"Enter 2 numbers to find there sum"<<endl;
	cin>>x>>y;
	add(x,y);
	cout<<"Enter 2 numbers to find there difference"<<endl;
	cin>>x>>y;
	dif(x,y);
	cout<<"Enter 1 number to find its square"<<endl;
	cin>>x;
	squ(x);
	cout<<"Enter 1 number to find its cube"<<endl;
	cin>>x;
	cub(x);
	cout<<"Enter 1 number to find its factorial"<<endl;
	cin>>x;
	fac(x);
	cout<<"Enter 1 number to find its table"<<endl;
	cin>>x;
	tab(x);
	cout<<"Enter 2 numbers to find max no"<<endl;
	cin>>x>>y;
	max(x,y);
}


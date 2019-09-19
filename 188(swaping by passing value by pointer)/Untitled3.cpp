#include<iostream>
#include<conio.h>
using namespace std;
swap(int *a,int *b)
{
	int *c;
	c=a;
	a=b;
	b=c;
}
main()
{
	int a,b;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<"After swaping"<<endl;
	swap(a,b);
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
}

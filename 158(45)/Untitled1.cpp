#include<iostream>
#include<conio.h>
using namespace std;
int a,b;
swaping()
{
	int c;
	c=a;
	a=b;
	b=c;
}
main()
{
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	swaping();
	cout<<"After swaping"<<endl;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
}

#include<iostream>
#include<conio.h>
using namespace std;
swaping(int &a,int &b)
{
	int c;
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
	swaping(a,b);
	cout<<"a="<<a<<endl;
	cout<<"b="<<b;
}

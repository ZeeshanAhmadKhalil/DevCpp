#include<iostream>
#include<conio.h>
using namespace std;
swap(int&a,int&b)
{
	int c;
	c=a;
	a=b;
	b=c;
}
main()
{
	int x,y;
	cout<<"x=";
	cin>>x;
	cout<<"y=";
	cin>>y;
	swap(x,y);
	cout<<"After swaping"<<endl;
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
}

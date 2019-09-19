#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a,b,*p1,*p2;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	p1=&a;
	p2=&b;
	cout<<"location of a="<<p1<<endl;
	cout<<"location of b="<<p2<<endl;

}

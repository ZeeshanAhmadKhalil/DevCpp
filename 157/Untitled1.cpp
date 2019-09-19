#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a,*p1;
	float b,*p2;
	char c,*p3;
	void *p4;
	p1=&a;
	p2=&b;
	p3=&c;
	p4=&c;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<"c=";
	cin>>c;
	cout<<"Adress of a="<<p1<<endl;
	cout<<"Value  of a="<<*p1<<endl;
	cout<<"Adress of b="<<p2<<endl;
	cout<<"Value  of b="<<*p2<<endl;
	cout<<"Adress of c="<<p4<<endl;
	cout<<"Value  of c="<<*p3<<endl;
}

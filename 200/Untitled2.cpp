#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a,*b,**c,***d,****e,*****f;
	b=&a;
	c=&b;
	d=&c;
	e=&d;
	f=&e;
	cout<<"a=";
	cin>>a;
	cout<<"Value  of a="<<*****f<<endl;
	cout<<"Adress if a="<<****f<<endl;
	cout<<"Adress if b="<<***f<<endl;
	cout<<"Adress if c="<<**f<<endl;
	cout<<"Adress if d="<<*f<<endl;
	cout<<"Adress if e="<<f<<endl;
}

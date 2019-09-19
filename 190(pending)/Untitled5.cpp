#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a,*b,**c,***d,****e,*****f;
	cout<<"a=";
	cin>>a;
	b=&a;
	c=&b;
	d=&c;
	e=&d;
	f=&e;
	cout<<"Adress of e="<<f<<endl;
	cout<<"Adress of d="<<*f<<endl;
	cout<<"Adress of c="<<**f<<endl;
	cout<<"Adress of b="<<***f<<endl;
	cout<<"Adress of a="<<****f<<endl;
	cout<<"value  of a="<<*****f<<endl;
	
}

#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a;
	float b;
	char c;
	void *p;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<"c=";
	cin>>c;
	p=&a;
	cout<<"Adress of a="<<p<<endl;
	p=&b;
	cout<<"Adress of b="<<p<<endl;
	p=&c;
	cout<<"Adress of c="<<p<<endl;
}

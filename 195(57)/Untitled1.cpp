#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a,*pa;
	float b,*pb;
	char c,*pc1;
	void *pc2;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<"c=";
	cin>>c;
	pa=&a;
	pb=&b;
	pc1=&c;
	pc2=&c;
	cout<<"location of a="<<pa<<endl;
	cout<<"Value of a   ="<<*pa<<endl;
	cout<<"location of b="<<pb<<endl;
	cout<<"Value of b   ="<<*pb<<endl;
	cout<<"location of c="<<pc2<<endl;
	cout<<"Value of c   ="<<*pc1<<endl;
}

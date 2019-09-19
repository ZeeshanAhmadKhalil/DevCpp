#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a,*pa;
	float b,*pb;
	char c,*pc1;
	void *pc2;
	cin>>a>>b>>c;
	pa=&a;
	cout<<"Value of a="<<*pa<<endl;
	cout<<"Adress of a="<<pa<<endl;
	pb=&b;
	cout<<"Value of b="<<*pb<<endl;
	cout<<"Adress of b="<<pb<<endl;
	pc1=&c;
	pc2=&c;
	cout<<"Value of c="<<*pc1<<endl;
	cout<<"Adress of a="<<pc2<<endl;
}

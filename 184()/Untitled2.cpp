#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a,*ap;
	float b,*bp;
	char c,*cp;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<"c=";
	cin>>c;
	ap=&a;
	bp=&b;
	cp=&c;
	cout<<"location of a="<<ap<<endl;
	cout<<"value of a   ="<<*ap<<endl;
	cout<<"location of b="<<bp<<endl;
	cout<<"value of b   ="<<*bp<<endl;
	cout<<"location of c="<<cp<<endl;
	cout<<"value of c   ="<<*cp<<endl;
}

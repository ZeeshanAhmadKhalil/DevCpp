#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a,c,*p1,*p2;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>c;
	p1=&a;
	p2=&c;
	cout<<"location of a"<<p1<<endl;
	cout<<"location of c"<<p2<<endl;
}

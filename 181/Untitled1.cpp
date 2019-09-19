#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a1,a2,*p1,*p2;
	cout<<"a1=";
	cin>>a1;
	cout<<"a2=";
	cin>>a2;
	p1=&a1;
	p2=&a2;
	cout<<"Adress of a1="<<p1<<endl;
	cout<<"Adress of a2="<<p2;
}

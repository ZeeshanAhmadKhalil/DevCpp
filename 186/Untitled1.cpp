#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a,b,*p1,*p2;
	p1=&a;
	p2=&b;
	cin>>*p1>>*p2;
	cout<<"The sum is="<<*p1+*p2;
}

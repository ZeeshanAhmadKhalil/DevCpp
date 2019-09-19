#include<iostream>
#include<conio.h>
using namespace std;
area(float base,float height)
{
	cout<<"Area of trianglr="<<(base*height)/2<<endl;
}
main()
{
	int base,height;
	cout<<"Enter base & height of triangle"<<endl;
	cout<<"Base=";
	cin>>base;
	cout<<"Height=";
	cin>>height;
	area(base,height);
}

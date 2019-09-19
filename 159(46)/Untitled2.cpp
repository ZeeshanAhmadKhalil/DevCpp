#include<iostream>
#include<conio.h>
using namespace std;
float height,base;
float area()
{
	return (height*base)/2;
}
main()
{
	cout<<"Enter height & base of triangle"<<endl;
	cout<<"Height=";
	cin>>height;
	cout<<"Base=";
	cin>>base;
	cout<<"Area of triangle=";
	cout<<area();
}


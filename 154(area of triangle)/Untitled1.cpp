#include<iostream>
#include<conio.h>
using namespace std;
int height,base;
int triA()
{
	return (height*base)/2;
}
main()
{
	cout<<"Height of triangle=";
	cin>>height;
	cout<<"Base  of  triangle=";
	cin>>base;
	cout<<"Area  of  triangle="<<triA();
}

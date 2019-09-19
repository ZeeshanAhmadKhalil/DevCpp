#include<iostream>
#include<conio.h>
using namespace std;
int a,b;
int square()
{
	return a*a;	
}
int cube()
{
	return b*b*b;
}
main()
{
	cout<<"Enter 2 numbers"<<endl;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<"a^2="<<square()<<endl;
	cout<<"b^3="<<cube()<<endl;
	cout<<"a^2+b^3="<<square()+cube()<<endl;
}



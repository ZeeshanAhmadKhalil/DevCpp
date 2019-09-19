/*OVERLOADING OF FUNCTION*/
#include<iostream>
#include<conio.h>
using namespace std;
add(int a)
{
	cout<<"a+a="<<a+a<<endl;
}
add(int a,int b)//number of parameters
{
	cout<<"a+b="<<a+b<<endl;
}
add(int a,float c)//type of parameters
{
	cout<<"a+c="<<a+c<<endl;
}
add(float c,int a)//sequence of parameters
{
	cout<<"a+c="<<a+c<<endl;
}
main()
{
	int a,b;
	float c;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<"c=";
	cin>>c;
	add(a);
	add(a,b);
	add(a,c);
	add(c,a);
	
}

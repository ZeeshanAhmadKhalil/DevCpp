#include<iostream>
#include<conio.h>
using namespace std;
add(int a,int b)
{
	cout<<"a+b="<<a+b<<endl;
}
add(int a,float b)
{
	cout<<"a+b="<<a+b<<endl;
}
add(int a)
{
	cout<<"a+a="<<a+a<<endl;
}
add(float a,int b)
{
	cout<<"a+b="<<a+b<<endl;
}
main()
{
	int a,b;
	float c;
	cin>>a>>b>>c;
	add(a,b);
	add(a);
	add(a,c);
	add(c,a);
	
}

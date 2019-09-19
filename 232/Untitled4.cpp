#include<iostream>
#include<conio.h>
using namespace std;
multiple(int a,int b)
{
	if(b==a)
	cout<<"b is equal to a"<<endl;
	else if(b%a==0)
	cout<<"b is multiple of a"<<endl;
	else if(a%b==0)
	cout<<"a is multiple of b"<<endl;
	else
	cout<<"Not multiples"<<endl;
}
main()
{
	int a,b;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	multiple(a,b);
}

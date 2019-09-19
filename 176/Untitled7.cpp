#include<iostream>
#include<conio.h>
using namespace std;
multiple(int a,int b)
{
	if(b%a==0)
	cout<<"b is multiple of a"<<endl;
	else
	cout<<"b is not multiple of a"<<endl;
}
main()
{
	int a,b;
	cout<<"Enter a & b.The b must be greater than a"<<endl;
	cout<<"b=";
	cin>>b;
	cout<<"a=";
	cin>>a;
	multiple(a,b);
}

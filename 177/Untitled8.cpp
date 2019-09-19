#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int power(int a,int b)
{
	return pow(a,b);
}
int absolute(int a)
{
	return abs(a);
}
main()
{
	int a,b;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<"a^b="<<pow(a,b)<<endl;
	cout<<"Enter -ive value"<<endl;
	cout<<"a=";
	cin>>a;
	cout<<"Absolute a="<<absolute(a);
}

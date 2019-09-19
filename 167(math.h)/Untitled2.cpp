#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int power(int a,int b)
{
	return pow(a,b);
}
main()
{
	int a,b;
	cout<<"Enter a^b"<<endl;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<"a^b="<<pow(a,b);
}


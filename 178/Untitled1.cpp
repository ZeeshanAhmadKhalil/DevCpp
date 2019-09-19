#include<iostream>
#include<conio.h>
using namespace std;
table(int a)
{
	static int b=1;
	cout<<a<<"*"<<b<<"="<<a*b<<endl;
	b++;
}
main()
{
	int a,b;
	cout<<"Table number=";
	cin>>a;
	cout<<"length of table=";
	cin>>b;
	for(int x=1;x<=b;x++)
	table(a);
}

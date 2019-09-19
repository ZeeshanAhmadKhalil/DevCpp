#include<iostream>
#include<conio.h>
using namespace std;
tab(int a)
{
	static int b=1;
	cout<<a<<"*"<<b<<"="<<a*b<<endl;
	b++;
}
main()
{
	int a,b;
	cout<<"Table no=";
	cin>>a;
	cout<<"length=";
	cin>>b;
	for(int x=1;x<=b;x++)
	tab(a);
}

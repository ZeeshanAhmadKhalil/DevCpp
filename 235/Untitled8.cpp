#include<iostream>
#include<conio.h>
using namespace std;
int fac(int a)
{
	int f=1;
	for(int i=1;i<=a;i++)
	f=f*i;
	return f;
}
main()
{
	int a;
	cin>>a;
	cout<<a<<"!"<<"="<<fac(a);
}

#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a,f=1;
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		f=f*i;
	}
	cout<<a<<"!="<<f;
}

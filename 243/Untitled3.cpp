#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int f=1,a;
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		f=f*i;
	}
	cout<<a<<"!="<<f;
}

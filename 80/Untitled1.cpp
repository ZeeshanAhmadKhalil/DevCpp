#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int f=1,m=1,n;
	cin>>n;
	while(m<=n)
	{
		f=f*m;
		m++;
	}
	cout<<n<<"!="<<f;
}

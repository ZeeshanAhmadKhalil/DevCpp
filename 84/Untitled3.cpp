#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	long double a=1,b=1,c,d=1;
	
	while(d<2)
	{
	cin>>c;
	while(a<=c)
	{
		b=b*a;
		a++;
	}
	cout<<c<<"!="<<b<<endl<<endl;
}
}

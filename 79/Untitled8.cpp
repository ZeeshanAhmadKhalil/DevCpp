#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int c=1,b,a=1;
	cin>>b;
	while(a<=b)
	{
		c=a*c;
		a++;
	}
	cout<<c;

}

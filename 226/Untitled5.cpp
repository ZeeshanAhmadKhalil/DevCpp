#include<iostream>
#include<conio.h>
using namespace std;
swap(int&a,int&b)
{
	int c;
	c=a;
	a=b;
	b=c;
}
main()
{
	int a,b;
	cin>>a>>b;
	swap(a,b);
	cout<<a<<endl<<b;
}

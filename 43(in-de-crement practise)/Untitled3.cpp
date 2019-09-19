#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a,b,c,d;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	c=++a;
	b=++d;
	a=++b;
	d=a++;
	c=++a;
	d=a++;
	cout<<++a<<b++<<--c<<d--;
}

#include<iostream>
using namespace std;
class A
{
	int a,b,c;
	public:
		set()
		{
			a=10;
			b=100;
			c=1000;
		}
		friend get(A);
};
get(A a1)
{
	cout<<"a="<<a1.a<<endl;
	cout<<"b="<<a1.b<<endl;
	cout<<"c="<<a1.c<<endl;
}
main()
{
	A a;
	a.set();
	get(a);
}

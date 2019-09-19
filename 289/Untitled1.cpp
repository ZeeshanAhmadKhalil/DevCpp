#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	private:
	int a,b;
	public:
	A()
	{
		a=10;
		b=20;
	}
	friend class B;
};
class B
{
	public:
	show(A x)
	{
		cout<<"a="<<x.a<<endl;
		cout<<"b="<<x.b<<endl;
	}
};
main()
{
	A x;
	B y;
	y.show(x);
}



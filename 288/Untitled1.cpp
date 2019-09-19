#include<iostream>
#include<conio.h>
using namespace std;
class B;
class A
{
	private:
	int a;
	public:
	A()
	{
		a=10;
	}
	friend show(A,B);
};
class B
{
	private:
	int b;
	public:
	B()
	{
		b=10;
	}
	friend show(A,B);
};
show(A x,B y)
{
	cout<<"a="<<x.a<<endl;
	cout<<"b="<<y.b<<endl;
	cout<<"a+b="<<x.a+y.b;
}
main()
{
	A obj1;
	B obj2;
	show(obj1,obj2);
	getch();
}


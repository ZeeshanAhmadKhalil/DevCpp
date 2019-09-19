#include<iostream>
using namespace std;
class A
{
	int a=1;
	protected:
		int b=2;
	public:
		int c=3;
};
class B:public A
{
	public:
		check()
		{
			//cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
			cout<<"c="<<c<<endl;
		}
};
class C:protected A
{
	public:
		check()
		{
			//cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
			cout<<"c="<<c<<endl;
		}
};
class D:public A
{
	public:
		check()
		{
//			cout<<"a="<<a<<endl;
//			cout<<"b="<<b<<endl;
//			cout<<"c="<<c<<endl;b 
		}
};
main()
{
	cout<<"Public inherited"<<endl;
	B b1;
	b1.check();
	cout<<"Protected inherited"<<endl;
	C c1;
	c1.check();
	cout<<"Private inherited"<<endl;
	D d1;
	d1.check();
}

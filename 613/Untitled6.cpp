#include<iostream>
using namespace std;
class A
{
	private:
		int a;
	protected:
		int b;
	public:
		int c;
};
class B:public A
{
	public:
		show()
		{
			cout<<"b="<<b<<endl;
			cout<<"c="<<c<<endl;
		}
};
class C:protected A
{
	public:
		show()
		{
			cout<<"b="<<b<<endl;
			cout<<"c="<<c<<endl;
		}
};
class D:private A
{
	public:
		show()
		{
//			cout<<"b="<<b<<endl;
//			cout<<"c="<<c<<endl;
		}
};
main()
{
	B b;
	b.show();
	C c;
	c.show();
	D d;
	d.show();
}

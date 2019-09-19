#include<iostream>
using namespace std;
class A
{	
		int x=1;
	protected:
		int y=2;
	public:
		int z=3; 
};
class B:private A
{
	//nothing is accessable
};
class C:protected A
{
	public:
		get_c()
		{
			//x is not accessable
			cout<<"y="<<y<<endl;
			cout<<"z="<<z<<endl;
		}
};
class D:public A
{
	public:
		get_d()
		{
			//x is not accessable
			cout<<"y="<<y<<endl;
			cout<<"z="<<z<<endl;
		}
};
main()
{
	B b;
	C c;
	D d;
	c.get_c();
	d.get_d();
}


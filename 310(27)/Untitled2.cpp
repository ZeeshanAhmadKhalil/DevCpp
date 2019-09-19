#include<iostream>
using namespace std;
class A
{
	public:
		int x=1;
	protected:
		int y=2;
	private:
		int z=3;
};
class B:public A
{
	public:
	B()
	{
		cout<<"x=";
		cin>>x;
		cout<<"y=";
		cin>>y;
	}
};
class C:protected A
{
	public:
	C()
	{
		cout<<"x=";
		cin>>x;
		cout<<"y=";
		cin>>y;
	}
};
class D:private A
{
	
};
main()
{
	C c;
	B b;
}

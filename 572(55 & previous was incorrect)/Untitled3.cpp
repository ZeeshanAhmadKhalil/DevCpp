#include<iostream>
using namespace std;
class A
{
	public:
		 show()
		{
			cout<<"This is class A"<<endl;
		}
};
class B:public A
{
	public:
		show()
		{
			cout<<"This is class B"<<endl;
		}
};
class C:public A
{
	public:
		show()
		{
			cout<<"This is class C"<<endl;
		}
};
main()
{
	A a;
	B b;
	C c;
	A*a1;
	a1=&a;
	a1->show();
	a1=&b;
	a1->show();
	a1=&c;
	a1->show();
}

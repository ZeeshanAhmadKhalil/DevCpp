#include<iostream>
using namespace std;
class Overloaded
{
	public:
		int a,b;
		seta()
		{
			a=10;
		}
		setb()
		{
			b=5;
		}
		geta()
		{
			cout<<"a="<<a<<endl;
		}
		getb()
		{
			cout<<"b="<<b<<endl;
		}
};
int operator+(Overloaded a,Overloaded b)
{
	cout<<"overloading + with /"<<endl;
	int n;
	n=a.a/b.b;
	return n;
}
main()
{
	Overloaded obj1,obj2;
	obj1.seta();
	obj2.setb();
	obj1.geta();
	obj2.getb();
	cout<<"a+b="<<obj1+obj2<<endl;
}

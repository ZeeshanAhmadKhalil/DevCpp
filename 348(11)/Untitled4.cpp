#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
		A()
		{
			a=100;
			b=100;
		}
		average()
		{
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
			cout<<"Averge="<<(a+b)/2;			
		}
};
main()
{
	A a;
	a.average();
}

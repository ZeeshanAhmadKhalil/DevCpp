#include<iostream>
using namespace std;
static int a;
class Static
{
	public:
		static int c;
		static set(int i)
		{
			static int b=i;
			a=i;
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
			cout<<"c="<<c<<endl;
		}
};
int Static::c;
main()
{
	Static s;
	s.set(12);
	Static::set(14);
}

#include<iostream>
using namespace std;
static int a;
class Static
{
	public:
		static set(int s)
		{
			cout<<"Function called"<<endl;
			static int b=s;
			a=s;
			cout<<"b="<<b<<endl;
			cout<<"a="<<a<<endl;
		}
};
main()
{
	Static s;
	s.set(1);
	s.set(2);
	s.set(3);
	Static::set(4);
}

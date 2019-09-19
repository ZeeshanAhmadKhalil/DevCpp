#include<iostream>
using namespace std;
static int a;
class Static
{
	static int b;
	int c;
	public:
		static set1(int b)
		{
//			c=a+b;
//			cout<<c<<endl;
			a=14;
			cout<<"a="<<a<<endl;
		}
		set2(int b)
		{
			a=b;
			this->b=b;
			c=b;
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
			cout<<"c="<<c<<endl;
		}
};
int Static::b; 
main()
{
	Static s;
	s.set1(14);
	s.set2(16);
}

#include<iostream>
using namespace std;
static int a;
class Static
{
	static int b;
	int c;
	public:
		static set1(int c,int b)
		{
			a=c;
			c=b;
//			this->b=b
//			this->c=12;
		}
		set2(int c,int b)
		{
//			this->a=a;
			this->b=b;
			this->c=c;
			a=c;
		}
		show()
		{
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
			cout<<"c="<<c<<endl;
		}
};
main()
{
	Static s;
	s.set1(12,14);
	s.set2(15,17);
}

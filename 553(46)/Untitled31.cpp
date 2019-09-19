#include<iostream>
using namespace std;
static int A;
class Static
{
	public:
		static set(int a,int b)
		{
			static int B=b;
			A=a;
			cout<<"A="<<A<<endl;
			cout<<"B="<<B<<endl;
		}
};
main()
{
	Static::set(1,1);
	Static s;
	s.set(2,2);
}

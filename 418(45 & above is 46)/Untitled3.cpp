#include<iostream>
using namespace std;
class Const
{
	float a,b,c;
	public:
		Const():a(1),b(c),c(a)
		{
			cout<<"a="<<a<<endl;
			cout<<"c="<<c<<endl;
			cout<<"b="<<b<<endl;
		}
		display()
		{
			cout<<"a="<<a<<endl;
			cout<<"c="<<c<<endl;
			cout<<"b="<<b<<endl;
		}
};
main()
{
	const Const c;
	//c.display()//error
}

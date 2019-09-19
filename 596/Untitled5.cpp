#include<iostream>
using namespace std;
class Constant
{
	int a;
	int b;
	int c;
	public:
		Constant():b(10),a(b),c(100)
		{
			
		}
		show1()const
		{
//			a=111;
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
			cout<<"c="<<c<<endl;
		}
		show2()
		{
			a=111;
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
			cout<<"c="<<c<<endl;
		}
};
main()
{
	const Constant con1;
	con1.show1();
//	con1.show2();
	Constant con2;
	con2.show1();
	con2.show2();
}

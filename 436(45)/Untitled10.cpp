#include<iostream>
using namespace std;
class Constant
{
	int a,b,c;
	public:
		Constant():b(1),a(b),c(3)
		{
		}
		show1()const
		{
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
			cout<<"c="<<c<<endl;
		}
		show2()
		{
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
			cout<<"c="<<c<<endl;
		}
};
main()
{
	const Constant con;
	con.show1();
	//con.show2();
}

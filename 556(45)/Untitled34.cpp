#include<iostream>
using namespace std;
class Const
{
	int a,b,c;
	public:
		Const():b(2),a(b),c(3)
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
	const Const con;
	con.show1();
//	con.show2();
}

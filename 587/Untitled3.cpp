#include<iostream>
using namespace std;
class Pointer
{
	int a;
	public:
//		Pointer()
//		{
//			
//		}
		set()
		{
			a=10000;
		}
		show()
		{
			cout<<"a="<<a<<endl;
		}
};
main()
{
	Pointer*p=new Pointer();
	p->set();
	p->show();
}

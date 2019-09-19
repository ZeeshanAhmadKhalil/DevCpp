#include<iostream>
using namespace std;
class Pointer
{
	int a;
	public:
		set()
		{
			a=10;
		}
		show()
		{
			cout<<"a="<<a<<endl;
		}
};
main()
{
	Pointer *p=new Pointer();
	p->set();
	p->show();
}

#include<iostream>
using namespace std;
class Copy
{
	int a;
	public:
		Copy()
		{
			cout<<"Const 1"<<endl;
		}
		set()
		{
			a=3;
		}
		set2()
		{
			a=4;
		}
		display()
		{
			cout<<a<<endl;
		}
		
};
main()
{
	Copy*c1=new Copy();
	c1->set();
	c1->display();
		Copy*c2=new Copy();
		c2=c1;
	c2->set2();
	c2->display();
}

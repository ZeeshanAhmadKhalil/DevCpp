#include<iostream>
using namespace std;
class Test
{
	private:
		int a;
		out()
		{
			cout<<"khan"<<endl;
		}
	protected:
		int b;
	public:
		ina()
		{
			cout<<"a=";
			cin>>a;
		}
		inb()
		{
			cout<<"b=";
			cin>>b;
		}
};
class Test1:private Test
{
	public:
		
};
class Test2:protected Test
{
	public:
		inb2()
		{
			cout<<"b=";
			cin>>b;
		}
};
class Test3:public Test
{	
};
main()
{
	Test t;
	Test1 t1;
	Test2 t2;
	Test3 t3;
	t2.inb2();
	t3.inb();
	t3.ina();
	
	
}

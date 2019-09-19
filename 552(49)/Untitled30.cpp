#include<iostream>
using namespace std;
class Static
{
	static int c;
	static int a;
	int b,d;
	
	public:
		static set1(int a,int b)
		{
			cout<<"Set1"<<endl;
//			this->a=a;
//			this->b=b;
			c=100;
//			d=100;
		}
		set2(int a,int b)
		{
			cout<<"Set2"<<endl;
			this->a=a;
			this->b=b;
			c=200;
			d=200;
		}
		display()
		{
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
			cout<<"c="<<c<<endl;
			cout<<"d="<<d<<endl;
		}
};
int Static::c;
int Static::a;
main()
{
	Static s;
	s.set1(100,100);
	s.display();
	s.set2(200,200);
	s.display();
}

#include<iostream>
using namespace std;
static int c;
class Static
{
	static int a;
	int b;
	public:
		static set1(int a,int b)
		{
			//this->b=b;
			//this->a=a;
			b=2;
			a=4;
			c=5;
		}
		set2(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		display()
		{
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
			cout<<"c="<<c<<endl;
		}
};
int Static::a;
main()
{
	Static s;
	s.set1(1,2);
	cout<<"Set1"<<endl;
	s.display();
	s.set2(3,4);
	cout<<"Set2"<<endl;
	s.display();
}

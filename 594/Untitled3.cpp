#include<iostream>
using namespace std;
class Static
{
	static int a;
	int b;
	public:
		static set1(int a,int b)
		{
//			this->a=a;
		}
		set2(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		static set3()
		{
			a=100;
//			b=200;
		}
		display()
		{
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
		}
};
int Static::a;
main()
{
	Static s;
	s.set1(12,13);
	s.display();
	s.set2(12,13);
	s.display();
	s.set3();
	s.display();
}
#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
		A()
		{
			x=100;
			y=100;
		}
		avg()
		{
			cout<<"Average="<<(x+y)/2<<endl;
		}
};
main()
{
	A a;
	a.avg();
}

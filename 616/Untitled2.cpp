#include<iostream>
using namespace std;
class Overload
{
	public:
		float a,b;
		set()
		{
			a=10;
			b=20;
		}
};
int operator++(Overload o)
{
	return o.a=o.a+10;
}
int operator+(Overload o)
{
	return o.a*o.b;
}
float operator%(Overload o1,Overload o2)
{
	return o1.a/o2.b;
}
main()
{
	Overload o1,o2;
	o1.set();
	o2.set();
	cout<<+o2<<endl;
	cout<<o1%o2<<endl;
	cout<<++o1<<endl;
}

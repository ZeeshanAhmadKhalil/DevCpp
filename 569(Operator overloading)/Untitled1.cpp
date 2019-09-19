#include<iostream>
#include<conio.h>
using namespace std;
class Operator_overloaded
{
	public:
		int a=1;
		int operator++()
		{
			a=a--;
			return a;
		}
};
main()
{
	int b=1;
	b++;
	cout<<b<<endl;
	Operator_overloaded obj;
	obj.a++;
	cout<<obj.a<<endl;
}

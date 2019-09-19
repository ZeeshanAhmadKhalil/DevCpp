#include<iostream>
using namespace std;
int count;
class A
{
	public:
	A()
	{
		count++;
	}
};
main()
{
	A a1,a2,a3;
	cout<<count<<"objects are created"<<endl;
}

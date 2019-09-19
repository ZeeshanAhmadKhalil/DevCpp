#include<iostream>
using namespace std;
class A
{
	public:
		int x;
	protected:
		int y;
};
main()
{
	A a;
	cin>>a.x;
	//y can't be accessed
}

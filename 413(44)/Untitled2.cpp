#include<iostream>
using namespace std;
class Constant
{
	private:
		int a=7;
		const int b=7;
	public:
		function1()
		{
			cout<<"a=";
			cin>>a;
			function2();
		}
		function2()const
		{
			cout<<"b*a="<<b*a;
		}	
};
main()
{
	Constant c;
	c.function1();
}

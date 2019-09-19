#include<iostream>
using namespace std;
class Factorial
{
	public:
	Factorial(int f)
	{
		int x=1;
		for(int a=1;a<=f;a++)
		{
			x=x*a;
		}
		cout<<f<<"!="<<x<<endl;
	}
};
main()
{
	int f;
	cin>>f;
	Factorial fac(f);
}

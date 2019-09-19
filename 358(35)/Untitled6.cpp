#include<iostream>
using namespace std;
class Factorial
{
	public:
	Factorial(int f)
	{
		int a=1;
		int x=1;
		do
		{
			x=x*a;
			a++;
		}while(a<=f);
		cout<<f<<"!="<<x<<endl;
	}
};
main()
{
	int f;
	cin>>f;
	Factorial fac(f);
}

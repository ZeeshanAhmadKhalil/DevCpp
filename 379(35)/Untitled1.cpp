#include<iostream>
using namespace std;
class Factorial
{
	int fac;
	public:
		compute()
		{
			cout<<"Enter a number"<<endl;
			cin>>fac;
			int x=1;
			for(int a=1;a<=fac;a++)
			{
				x=x*a;
			}
			cout<<fac<<"!="<<x<<endl;
		}
};
main()
{
	Factorial f;
	f.compute();
}

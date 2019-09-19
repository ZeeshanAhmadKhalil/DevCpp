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
			int a=1;
			while(a<=fac)
			{
				x=x*a;
				a++;
			}
			cout<<fac<<"!="<<x<<endl;
		}
};
main()
{
	Factorial f;
	f.compute();
}

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
			do
			{
				x=x*a;
				a++;
			}while(a<=fac);
			cout<<fac<<"!="<<x<<endl;
		}
};
main()
{
	Factorial f;
	f.compute();
}

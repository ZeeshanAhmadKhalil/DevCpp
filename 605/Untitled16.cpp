#include<iostream>
using namespace std;
class Factorial
{
	int a;
	public:
		set()
		{
			do
			{
			cout<<"Enter a number to find its factorial:"<<endl;
			cin>>a;
			}
			while(a<0);
		}
		compute()
		{
			int f=a-1;
			while(f>0)
			{
			a=a*f;
			f--;	
			}
			cout<<"Factorial is:"<<a<<endl;
		}
};
main()
{
	Factorial f;
	f.set();
	f.compute();
}

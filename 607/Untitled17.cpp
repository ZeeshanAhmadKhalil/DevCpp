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
			if(a==0)
			cout<<"Factorial is:1"<<endl;
			else
			{
			int f=a-1;
			do
			{
			a=a*f;
			f--;	
			}
			while(f>0);
			cout<<"Factorial is:"<<a<<endl;
			}
		}
};
main()
{
	Factorial f;
	f.set();
	f.compute();
}

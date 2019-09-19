#include<iostream>
using namespace std;
class Sets
{
	protected:
		int x,count=0;
	public:
		prime_numbers(int i)
		{
			x=i;
			int a=1;
			for(;a<x;a++)
			{
				if(x%a==0)
				count++;
			}
			if(count==1)
				cout<<x<<",";
		}
};
main()
{
	Sets s;
	for(int f=1;f>0;f++)
	s.prime_numbers(f);
}

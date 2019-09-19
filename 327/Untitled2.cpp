#include<iostream>
using namespace std;
class Sets
{
		int x,count;
	public:
		prime_numbers(int i)
		{
			count=0;
			x=i;
			int a=1;
			for(;a<x;a++)
			{
				if(x%a==0)
				count++;
			}
			if(count==1)
				cout<<x<<" is a prime number"<<endl;
			else
			cout<<x<<" is not a prime number"<<endl;
		}
};
main()
{
	Sets s;
	int f;
	for(char choice='y';choice=='y';)
	{
		cout<<"Enter a number=";
		cin>>f;
		s.prime_numbers(f);
		cout<<endl;
	}
}

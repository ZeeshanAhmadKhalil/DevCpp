#include<iostream>
using namespace std;
class Prime
{
	int no;
	public:
		in()
		{
			cout<<"Enter a number=";
			cin>>no;
		}
		compute()
		{
			int count=0;
			for(int a=1;a<no;a++)
			{
				if(no%a==0)
				count++;
			}
			if(count==1)
				cout<<no<<" is prime";
			else
			cout<<no<<" is not prime";
		}
};
main()
{
	Prime p;
	p.in();
	p.compute();
}

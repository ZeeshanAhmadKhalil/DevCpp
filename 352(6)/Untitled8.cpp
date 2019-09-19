#include<iostream>
using namespace std;
class Array
{
	int A[5];
	public:
		set()
		{
			cout<<"Enter the values to store in array"<<endl;
			for(int a=0;a<5;a++)
			{
				cin>>A[a];
			}
		}
		max()
		{
			int max=A[0];
			for(int a=0;a<5;a++)
			{
				if(max<A[a])
				{
					max=A[a];
				}
			}
			cout<<"The maximum value in arrray="<<max<<endl;
		}
		min()
		{
			int min=A[0];
			for(int a=0;a<5;a++)
			{
				if(min>A[a])
				{
					min=A[a];
				}
			}
			cout<<"The minimum value in arrray="<<min<<endl;
		}
};
main()
{
	Array a;
	a.set();
	a.max();
	a.min();
}

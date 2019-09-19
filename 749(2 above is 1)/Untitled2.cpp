#include<iostream>
using namespace std;
class Dynamic
{
	int*y,size,a;
	public:
		Dynamic()
		{
			size=5;
			y=new int[size];
		}
		void set()
		{
			a=10;
			for(int i=1;i<=5;i++)
			{
				y[i]=i;
			}
		}
		int *get()
		{
			return y;
		}
		void cpy()
		{
			y=&a;
		}
};
main()
{
	int*y=new int[5];
	Dynamic d;
	d.set();
	d.cpy();
	y=d.get();
	for(int i=0;i<=0;i++)
	{
		cout<<y[i]<<" ";
	}
}


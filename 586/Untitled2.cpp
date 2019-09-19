#include<iostream>
using namespace std;
class Array
{
	int A[3],B[3];
	public:
	set()
	{
		for(int i=0;i<3;i++)
		{
			A[i]=100;
		}
		for(int i=1;i<=4;i++)
		{
			B[i]=200;
		}
	}
	show()
	{
		for(int i=0;i<3;i++)
		{
			cout<<A[i]<<endl;
		}
		for(int i=1;i<=4;i++)
		{
			cout<<B[i]<<endl;
		}
	}
};
main()
{
	Array a;
	a.set();
	a.show();
}


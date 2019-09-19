#include<iostream>
using namespace std;
class Array
{
	int A[5];
	public:
		Array()
		{
			for(int a=0;a<5;a++)
			{
				cin>>A[a];
			}
		}
		maximum()
		{
			int max=A[0];
			for(int a=0;a<5;a++)
			{
				if(max<A[a])
				max=A[a];
				
			}
			cout<<"Max="<<max<<endl;
		}
		minimum()
		{
			int min=A[0];
			for(int a=0;a<5;a++)
			{
				if(min>A[a])
				min=A[a];
				
			}
			cout<<"Min="<<min<<endl;
		}
};
main()
{
	Array a;
	a.maximum();
	a.minimum();
}

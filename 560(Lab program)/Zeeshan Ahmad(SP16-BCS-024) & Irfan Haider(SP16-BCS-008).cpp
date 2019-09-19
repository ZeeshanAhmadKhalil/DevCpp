#include<iostream>
using namespace std;
class Array
{ 
	int n;
	public:
		check()
		{
			cout<<"Enter the size of array:"<<endl;
			cin>>n;
			int A[n];
			for(int a=0;a<n;a++)
			{
				cout<<"Enter a non-negative integer to store in A["<<a<<"]:"<<endl;
				cin>>A[a];
				if(A[a]<0)
				break;
			}
		}
};
main()
{
	Array a;
	a.check();
}

#include<iostream>
using namespace std;
class Array
{
	int a;
	public:
		Array()
		{
			
		}
		_()
		{
			cout<<"a=";
			cin>>a;
		}
};
main()
{
	Array*A[5];
	for(int i=0;i<5;i++)
	{
		A[i]=new Array();
	}
	for(int i=0;i<5;i++)
	{
		A[i]->_();
	}
}

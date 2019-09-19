#include<iostream>
using namespace std;
class Array_obj
{
	int a;
	public:
		set()
		{
			cout<<"a=";
			cin>>a;
		}
};
main()
{
	Array_obj A[2];
	
	for(int a=0;a<2;a++)
	{
		A[a].set();
	}
}

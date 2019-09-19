#include<iostream>
using namespace std;
class Array
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
	Array obj1,obj2;
	Array*A[2]={&obj1,&obj2};
	Array*B[2];
	Array*C[2];
	for(int i=0;i<2;i++)
	{
		B[i]=&obj1;
	}
	C[0]=&obj1;
	C[1]=&obj2;
	for(int i=0;i<2;i++)
	{
		A[i]->set();
	}
	for(int i=0;i<2;i++)
	{
		B[i]->set();
	}
	for(int i=0;i<2;i++)
	{
		C[i]->set();
	}
}

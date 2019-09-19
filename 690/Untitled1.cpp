#include<iostream>
using namespace std;
main()
{
	int x[3];
	for(int i=0;i<3;i++)
	x[i]=i;
	for(int i=0;i<3;i++)
	cout<<x[i]<<endl;
	int a=7;
//	x=a;
	int*y=new int[3];
	y=&a;
//	y=a;
//	y=7
	cout<<y[0]<<endl;
	y=x;
	for(int i=0;i<3;i++)
	cout<<y[i]<<endl;
}

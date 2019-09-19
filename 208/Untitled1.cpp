#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	float *p,A[10]={1,2,3,4,5,6,7,8,9,10};
	cout<<"The no in array are:"<<endl;
	p=&A[0];
	for(int a=0;a<10;a++)
	{
		cout<<*p<<" ";
		p++;
	}
}

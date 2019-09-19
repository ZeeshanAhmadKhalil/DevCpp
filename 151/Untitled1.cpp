#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	float sum=1;
	for(int a=4;a<=25;a=a+4)
	{
		sum=sum+(1/a);
	}
	cout<<"sum="<<sum;
}

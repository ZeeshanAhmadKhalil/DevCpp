#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	float sum=1;
	for(int a=4;a<=100;a=a+4)
	{
		cout<<"sum="<<sum<<endl;
		cout<<"a="<<a<<endl;
		sum=sum+1/a;
	}
	cout<<sum;
}

#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int sum=1;
	for(int a=1;a<=25;a++)
	{
		sum=sum+1/(a*4);	
	}
	cout<<"The sum is"<<endl<<sum;
}

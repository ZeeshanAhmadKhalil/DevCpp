#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int A[10],B[10],C[10],sum1=0,sum2=0,num,count=0;
	for (int x=0;x<10;x++)
	{
		cout<<"Enter a no for A"<<x<<endl;
		cin>>A[x];
		cout<<"Enter a no for B"<<x<<endl;
		cin>>B[x];
		C[x]=A[x]+B[x];
		sum1=sum1+A[x];
		sum2=sum2+B[x];
	}
	for (int y=0;y<10;y++)
	{
		cout<<"The sum of"<<A[y]<<"+"<<B[y]<<"="<<C[y]<<endl;
	}
	cout<<"The sum of all values in array A ="<<sum1<<endl;
	cout<<"The sum of all values in array b ="<<sum2<<endl; 
	cout<<"Enter a number"<<endl;
	cin>>num;
	for(int z=0;z<10;z++)
	{
		
		if (num==A[z])
		{
			cout<<"Present in A["<<z<<"]"<<endl;
			count++;
		}
		
	}
	for(int z=0;z<10;z++)
	{
		if(num==B[z])
		{
			cout<<"Present in B["<<z<<"]"<<endl;
			count++;
		}
	}
	if (count>0)
	cout<<"Entered no is "<<count<<" times present";
	else
	cout<<"not predent";
	
}

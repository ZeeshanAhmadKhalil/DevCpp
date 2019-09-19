#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int A[5],B[5],sum[5];
	cout<<"Enter 10 no in arrays"<<endl;
	for(int a=0;a<5;a++)
	{
		cin>>A[a]>>B[a];
		sum[a]=A[a]+B[a];
	}
	cout<<"The sums of A[5] & b [5] are"<<endl;
	for(int a=0;a<5;a++)
	{
		cout<<sum[a]<<" ";
	}
	cout<<endl;
	int no,found=0;
	cout<<"Enter a number"<<endl;
	cin>>no;
	for(int a=0;a<5;a++)
	{
		if(no==A[a])
		{
			found++;
			cout<<"entered no is present in A["<<a<<"]"<<endl;
		}
		if(no==B[a])
		{
			found++;
			cout<<"entered no is present in B["<<a<<"]"<<endl;
		}
		if(no==sum[a])
		{
			found++;
			cout<<"entered no is present in C["<<a<<"]"<<endl;
		}
	}
	cout<<"The entered no is "<<found<<" times present"<<endl;
	int max=A[0],min=B[0];
	for(int a=0;a<5;a++)
	{
		if (max<A[a])
		{
			max=A[a];
		}
	}
	for(int a=0;a<5;a++)
	{
		if (min>B[a])
		{
			min=B[a];
		}
	}
	cout<<"The max in A[5] is"<<endl<<max<<endl<<"The min in B[5] is"<<endl<<min<<endl;
	int c;
	for(int a=0;a<5;a++)
	{
		for(int b=a+1;b<5;b++)
		{
			if(A[a]>A[b])
			{
				c=A[a];
				A[a]=A[b];
				A[b]=c;
			}
		}
		for(int b=0;b<4;b++)
		{
			if(B[b]<B[b+1])
			{
				c=B[b];
				B[b]=B[b+1];
				B[b+1]=c;
			}
		}
	}
	cout<<"The no.s in A[5] in acending order are"<<endl;
	for(int a=0;a<5;a++)
	{
		cout<<A[a]<<" ";
	}
	cout<<endl<<"The no.s in B[5] in decending order are"<<endl;
	for(int a=0;a<5;a++)
	{
		cout<<B[a]<<" ";
	}
	cout<<endl;
	
}

#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int A[5],B[5],C[5],c,sum1=0,sum2=0,found=0,no,count=0;
	cout<<"Enter 5 no for Array A[5]"<<endl;
	for(int a=0;a<5;a++)
	{
		cin>>A[a];
	}
	cout<<"Enter 5 no for Array B[5]"<<endl;
	for(int b=0;b<5;b++)
	{
		cin>>B[b];
	}
	cout<<"The values stored in C[5] are"<<endl;
	for(int c=0;c<5;c++)
	{
		C[c]=A[c]+B[c];
		cout<<A[c]<<"+"<<B[c]<<"="<<C[c]<<endl;
	}
	cout<<"The sum of values in A[5] is"<<endl;
	for(int a=0;a<5;a++)
	{
		sum1=sum1+A[a];
	}
	cout<<sum1<<endl;
	cout<<"The sum of values in B[5] is"<<endl;
	for(int b=0;b<5;b++)
	{
		sum2=sum2+B[b];
	}
	cout<<sum2<<endl;
	cout<<"Enter a no"<<endl;
	cin>>no;
	for(int a=0;a<5;a++)
	{
		if (no==A[a])
		{
			cout<<"Tne no is present in A["<<a<<"]"<<endl;
			found++;
		}
	}
	for(int a=0;a<5;a++)
	{
		if(no==B[a])
		{
			cout<<"The no is present in B["<<a<<"]"<<endl;
			found++;
		}
	}
	for(int a=0;a<5;a++)
	{
		if(no==C[a])
		{
			cout<<"The no is present in C["<<a<<"]"<<endl;
			found++;
		}
	}
	if (found>0)
	cout<<"The no is "<<found<<" times present"<<endl;
	else
	cout<<"Not present"<<endl;
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
	}
	for(int a=0;a<5;a++)
	{
		for(int b=0;b<4;b++)
		{
			if(C[b]<C[b+1])
			{
				c=C[b];
				C[b]=C[b+1];
				C[b+1]=c;
			}
		}
	}
	cout<<"The no in A[5] in acending order by selection sorting are"<<endl;
	for(int a=0;a<5;a++)
	cout<<A[a]<<" ";
	cout<<endl;
	cout<<"The no in C[5] in decending order by bubble sorting are"<<endl;
	for(int a=0;a<5;a++)
	cout<<C[a]<<" ";
	for(int a=0;a<5;a++)
	{
		if(A[a]<9)
		count++;
	}
	for(int a=0;a<5;a++)
	{
		if(B[a]<9)
		count++;
	}
	for(int a=0;a<5;a++)
	{
		if(C[a]<9)
		count++;
	}
	cout<<endl;
	cout<<"The no.s less than 9 are "<<count<<" times present"<<endl;
	int max=A[0],min=B[0];
	for(int a=0;a<5;a++)
	{
		if(max<A[a])
		max=A[a];
	}
	for(int a=0;a<5;a++)
	{
		if (min>B[a])
		min=B[a];
	}
	cout<<"The largest value in A[5] is"<<endl;
	cout<<max<<endl;
	cout<<"The smallest value in B[5] is"<<endl;
	cout<<min<<endl;
}



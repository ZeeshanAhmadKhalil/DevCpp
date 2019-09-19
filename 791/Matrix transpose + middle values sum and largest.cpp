#include<iostream>
using namespace std;
main()
{
	int sum=0;
	int largest=0;
	int sum_big[4]={0,0,0,0};
	int sum_big_counter=0;
	int matrix[3][3]={{0,0,0},{0,0,0},{0,0,0}};
	cout<<"Enter 9 values to store in matrix:"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>matrix[j][i];
		}
	}
	cout<<"The original Matrix is:"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<matrix[i][j]<<" ";
//				cout<<i<<" "<<j<<endl;
			if((i-j)==1||(i-j)==-1)
			{
				sum_big[sum_big_counter++]=matrix[i][j];
			}
		}
		cout<<endl;
	}
	cout<<"The transpose of matrix is"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<matrix[j][i]<<" ";
		}
		cout<<endl;
	}
	largest=sum_big[0];
	for(int i=0;i<4;i++)
	{
		if(largest<sum_big[i])
			largest=sum_big[i];
		sum=sum+sum_big[i];
	}
	cout<<"The sum of center indexes is:"<<endl;
	cout<<sum<<endl;
	cout<<"The largest of center indexes is:"<<endl;
	cout<<largest<<endl;
}

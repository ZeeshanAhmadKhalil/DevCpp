#include<iostream>
using namespace std;
class Matrix
{
	int array1[5][5];
	int rows,columns;
	public:
	set()
	{
		cout<<"Enter the no. of rows (max=5)"<<endl;
		cin>>rows;
		while(rows>5)
		{
			cout<<"Enter the no. rows (max=5)"<<endl;
			cin>>rows;
		}
		cout<<"Enter the no. columns (max=5)"<<endl;
		cin>>columns;
		while(columns>5)
		{
			cout<<"Enter the no. columns (max=5)"<<endl;
			cin>>columns;
		}
		cout<<"Enter the elements of array"<<endl;
		for(int i=1;i<=rows;i++)
		{
			for(int j=1;j<=columns;j++)
			cin>>array1[i][j];
		}
	}
	show()
	{
		cout<<"The Matrix is"<<endl;
		for(int i=1;i<=rows;i++)
		{
			for(int j=1;j<=columns;j++)
			cout<<array1[i][j]<<"	";
			cout<<endl;
		}
	}
	calculate()
	{
		cout<<"The Transpose of matrix  is"<<endl;
		for(int i=1;i<=columns;i++)
		{
			for(int j=1;j<=rows;j++)
			cout<<array1[j][i]<<"	";
			cout<<endl;
		}
		
	}
};

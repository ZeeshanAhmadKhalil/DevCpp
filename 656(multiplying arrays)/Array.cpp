#include<iostream>
using namespace std;
class Matrix
{
	int array1[6][6],array2[6][6];
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
		cout<<"Enter the elements of first Marix"<<endl;
		for(int i=1;i<=rows;i++)
		{
			for(int j=1;j<=columns;j++)
			cin>>array1[i][j];
		}
		cout<<"Enter the elements of second Matrix"<<endl;
		for(int i=1;i<=rows;i++)
		{
			for(int j=1;j<=columns;j++)
			cin>>array2[i][j];
		}
	}
	show()
	{
		cout<<"The first Matrix is"<<endl;
		for(int i=1;i<=rows;i++)
		{
			for(int j=1;j<=columns;j++)
			cout<<array1[i][j]<<"	";
			cout<<endl;
		}
		cout<<"The second Matrix is"<<endl;
		for(int i=1;i<=rows;i++)
		{
			for(int j=1;j<=columns;j++)
			cout<<array1[i][j]<<"	";
			cout<<endl;
		}
	}
	calculate()
	{
		cout<<"The resultant matrix of multiplication is"<<endl;
		for(int i=1;i<=rows;i++)
		{
			for(int j=1;j<=columns;j++)
			cout<<array1[i][j]*array2[i][j]<<"	";
			cout<<endl;
		}
		
	}
};

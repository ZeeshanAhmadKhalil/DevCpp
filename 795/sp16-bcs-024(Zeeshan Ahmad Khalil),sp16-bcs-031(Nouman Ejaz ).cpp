#include<iostream>
using namespace std;
main()
{
	char array[10],child;
	for(int i=0;i<10;i++)
	{
		array[i]=' ';
	}
	cout<<"Enter the stating node of graph"<<endl;
	cin>>array[0];
	while(array[0]!='F')
	{
		if(array[0]=='A')
		{
			cout<<"Enter 3 childs of "<<array[0]<<endl;
			for(int i=0;i<3;i++)
			{
				cin>>child;
				array[i]=child;
			}
		}
		else if(array[0]=='C')
		{
			cout<<"Enter 2 childs of "<<array[0]<<endl;
			int temp;
			for(int i=1;array[i]!=' ';i++)
			{
				array[i-1]=array[i];
				temp=i;
			}
			array[temp]=' ';
			for(int i=temp;i<temp+2;i++)
			{
				cin>>child;
				array[i]=child;
			}
		}
		else
		{
			int temp;
			for(int i=1;array[i]!=' ';i++)
			{
				array[i-1]=array[i];
				temp=i;
			}
			array[temp]=' ';
		}
		cout<<"Queue:";
		for(int j=0;array[j]!=' ';j++)
		{
			cout<<array[j]<<" ";
		}
		cout<<endl;
	}
	int temp;
	for(int i=0;array[i]!=' ';i++)
	{
		array[i-1]=array[i];
		temp=i;
	}
	array[temp]=' ';
	cout<<"Hence the goal is found"<<endl;
	cout<<"So, The Remaning Queue is"<<endl;
	for(int i=0;array[i]!=' ';i++)
	{
		cout<<array[i]<<" ";
		temp=i;
	}
	cout<<endl;
}

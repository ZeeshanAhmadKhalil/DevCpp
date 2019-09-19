#include<iostream>
using namespace std;
class List
{
	int size,current;
	int array[3000];
	List()
	{
		size=0;
	}
	create()
	{
		int array_size;
	    cout<<"Enter the size of array"<<endl;
		cin>>array_size;
		cout<<"Enter the numbers to store in array"<<endl;
		for(int i=1;i<=array_size;i++)
		{
			cout<<"Index "<<i<<":";
			cin>>array[i];
			size++;
			current=array[i];
		}
		cout<<"Size="<<size<<endl;
		cout<<"Current="<<current<<endl;
	}
	insert()
	{
		int value;
		cout<<"Enter the value which you want to insert"<<endl;
		cin>>value;
		for(int i=size;i>=current;i--)
		{
			array[i+1]=array[i];
		}
		array[current]=value;
		size++;
		cout<<"The array would become"<<endl;
		for(int i=1;i<=size;i++)
		{
			cout<<"Index "<<i<<":";
			cout<<array[i]<<endl;
		}
		cout<<"Size="<<size<<endl;
		cout<<"Current="<<current<<endl;
	}
};
main()
{
	
}

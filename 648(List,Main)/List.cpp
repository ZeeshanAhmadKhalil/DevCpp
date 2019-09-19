#include<iostream>
#include<windows.h>
using namespace std;
class List
{
	int size,current;
	int*array;
	public:
	List()
	{
		size=0;
		array=new int[size];
	}
	delet()
	{
		delete[]array;
		size=current=0;
	}
	show()
	{
		cout<<"The array would become"<<endl;
		if(size==0)
		cout<<"empty"<<endl;
		for(int i=1;i<=size;i++)
		{
			cout<<"Index "<<i<<":";
			cout<<array[i]<<endl;
		}
		cout<<"Size="<<size<<endl;
		cout<<"Current Index="<<current<<endl;
	}
	create()
	{
		size=0;
		int array_size;
	    cout<<"Enter the size of array"<<endl;
		cin>>array_size;
		cout<<"Enter the numbers to store in array"<<endl;
		for(int i=1;i<=array_size;i++)
		{
			cout<<"Index "<<i<<":";
			cin>>array[i];
			size++;
			current=i;
		}
		cout<<"Size="<<size<<endl;
		cout<<"Current="<<current<<endl;
	}
	insert()
	{
		int value;
		cout<<"Enter the value which you want to insert"<<endl;
		cin>>value;
		if(size!=0)
		{
			for(int i=size;i>=current;i--)
			{
				array[i+1]=array[i];
			}
			array[current]=value;
		}
		else
		{
			array[1]=value;
			current=1;
		}
		size++;
	}
	remove()
	{
		if(size!=0)
		{
			for(int i=current;i<=size;i++)
			{
				array[i]=array[i+1];
			}
			if(current==size)
			current--;
			size--;
		}
		else
		{
			cout<<"Nothing to Remove"<<endl;
			system("Pause");
		}
	}
	find()
	{	
		int value;
		bool no=true;
		cout<<"Enter a value to search in array"<<endl;
		cin>>value;
		for(int i=1;i<=size;i++)
		{
			if(array[i]==value) 
			{
				no=false;
				cout<<"The value "<<value<<" is present at index "<<i<<" in the array"<<endl;
			}
		}
		if(no==true)
		cout<<"The entered value is not present in the array"<<endl<<endl;
		system("pause");
	}
	update()
	{
		if(size!=0)
		{
			int value;
			cout<<"What value you want to update"<<endl;
			cin>>value;
			array[current]=value;
		}
		else
		{
			cout<<"Nothing to update"<<endl;
			system("Pause");
		}
	}
	start()
	{
		if(size!=0)
		current=1;
	}
	end()
	{   
		current=size;
	}
	next()
	{
		if(current!=size)
		current=current+1;
	}
	back()
	{
		if(current!=1&&current!=0)
		current=current-1;
	}
};

#include<iostream>
#include<windows.h>
using namespace std;
int array[3000];
int size=0;
insert()
{
	int index,value;
	cout<<"Enter the index where you want to insert value"<<endl;
	cout<<"             ''WARNING'':index must be between 1 & "<<size<<endl;
	cin>>index;
	cout<<"Enter the value which you want to insert"<<endl;
	cin>>value;
	for(int i=size;i>=index;i--)
	{
		array[i+1]=array[i];
	}
	array[index]=value;
	size++;
	cout<<"The array would become"<<endl;
	
	for(int i=1;i<=size;i++)
	{
		cout<<"Index "<<i<<":";
		cout<<array[i]<<endl;
	}
	cout<<"Size="<<size<<endl;
}
remove()
{
	int index;
	cout<<"Enter the index whose value you want to remove"<<endl;
	cout<<"             ''WARNING'':index must be between 1 & "<<size<<endl;
	cin>>index;
	for(int i=index;i<=size;i++)
	{
		array[i]=array[i+1];
	}
	size--;
	cout<<"The array would become"<<endl;
	if(size==0)
	cout<<"empty"<<endl;
	for(int i=1;i<=size;i++)
	{
		cout<<"Index "<<i<<":";
		cout<<array[i]<<endl;
	}
	cout<<"Size="<<size<<endl;	
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
	cout<<"The entered value is not present in the array"<<endl;
}
update()
{
	int index,value;
	cout<<"Which index wich you want to update"<<endl;
	cin>>index;
	cout<<"What value you want to update"<<endl;
	cin>>value;
	array[index]=value;
	for(int i=1;i<=size;i++)
	{
		cout<<"Index "<<i<<":";
		cout<<array[i]<<endl;
	}
	cout<<"Size="<<size<<endl;	
}
main()
{
	int array_size;
	cout<<"Enter the size of array"<<endl;
	cin>>array_size;
	int choice;
	char retry;
	cout<<"Enter the numbers to store in array"<<endl;
	for(int i=1;i<=array_size;i++)
	{
		cout<<"Index "<<i<<":";
		cin>>array[i];
		size++;
	}
	cout<<"Size="<<size<<endl;
	label:
	cout<<"Enter your choice:"<<endl;
	cout<<"1 to insert a value into array"<<endl;
	cout<<"2 to find a value in the array"<<endl;
	cout<<"3 to remove value from the array"<<endl;
	cout<<"4 to update value into array"<<endl;
	cout<<"5 to exit the program"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			insert();
			break;
		case 2:
			find();
			break;
		case 3:
			remove();
			break;
		case 4:
			update();
			break;
		case 5:
			goto label1;
		default:
			cout<<"You entered wrong choice"<<endl;
			cout<<"Retry(y/n)"<<endl;
			cin>>retry;
			if(retry=='y')
			{
				system("cls");
				for(int i=1;i<=size;i++)
				{
					cout<<"Index "<<i<<":";
					cout<<array[i]<<endl;
				}
				cout<<"Size="<<size<<endl;
				goto label;
			}
	}
	goto label;
	label1:
	cout<<"Thank you for using"<<endl;
}

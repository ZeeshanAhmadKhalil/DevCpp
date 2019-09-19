#include<iostream>
using namespace std;
main()
{
	int used=0;
	int size;
	cout<<"Enter the size of array"<<endl;
	cin>>size;
	int*array=new int[size];
	cout<<"Enter the values in array"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>array[i];
		if(array[i]==array[i-1]&&i!=0)
		{
			i--;
			cout<<"The number "<<array[i+1]<<" is already entered in previous consective index"<<endl;
		}
		used++;
	}
	cout<<"The Array is"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
	cout<<"The used iterations are "<<used<<endl;
}

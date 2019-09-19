#include<iostream>
#include<string>
using namespace std;
class Array
{
	string array[10];
	public:
	set()
	{
		cout<<"Enter any ten names (''WARNING'' start with capital letter & do not enter space)"<<endl;
		for(int i=0;i<10;i++)
		{
			cout<<i+1<<":";
			cin>>array[i];
		}
	}
	show()
	{
		cout<<"The Names are"<<endl;
		for(char a='A';a<='Z';a++)
		{
			for(int i=0;i<=9;i++)
			{
				if(array[i].at(0)==a)
				cout<<array[i]<<endl;
			}
		}
	}
};

#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int size=10;
	int array[size],maximum;
	bool max=0;
//	cout<<"Enter the size of array"<<endl;
	cout<<"Enter the 10 values"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>array[i];
	}
	for(;max<=1;max++)
	{
		for(int i=0;i<10;i++)
		{	
			if(max==0)
			{
				if(i==0||i==size-3)
				{
//					cout<<i<<endl;
					maximum=array[i];
					for(int j=1;j<3;j++)
					{
						if(maximum<array[++i])
						maximum=array[i];
					}
					cout<<"maximum="<<maximum<<endl;
				}
			}
		}	
	}
}

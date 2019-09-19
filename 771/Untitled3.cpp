#include<iostream>
using namespace std;
class Sort
{
	int c,min;
	public:
	int* selection_sort(int*y,int N)
	{
		for(int i=0;i<N;i++)
		{
			min=find_min(y,i,N);
			c=y[i];
			y[i]=y[min];
			y[min]=c;
		}
	}
	int find_min(int*y,int i,int N)
	{
		min=i;
		for(int a=i;a<N;a++)
		{
			if(y[a]<y[min])
			min=a;
		}
		return min;
	}
	void show(int*y,int N)
	{
		for(int i=0;i<N;i++)
		cout<<y[i]<<" ";
	}
	int* insertion_sort(int*y,int N)
	{
		for(int i=1;i<N;i++)
		{
			for(int j=i-1;j>=0;j--)
			{
				if(y[j]>y[j+1])
				{
					c=y[j];
					y[j]=y[j+1];
					y[j+1]=c;
				}
			}
		}
	}
	int* bubble_sort(int*y,int N)
	{
		for(int i=0;i<N-1;i++)
		{
			for(int j=0;j<N-1;j++)
			{
				if(y[j]>y[j+1])
				{
					c=y[j];
					y[j]=y[j+1];
					y[j+1]=c;
				}
			}
		}
	}
};
main()
{
	int a=-1;
	int*y=new int[5];
	for(int i=5;i>0;i--)
	y[++a]=i;
	Sort s;
	cout<<"Before:";
	s.show(y,5);
	cout<<endl;
	s.bubble_sort(y,5);
//	s.insertion_sort(y,5);
//	s.selection_sort(y,5);
	cout<<"After:";
	s.show(y,5);
	cout<<endl;
}

#include<iostream>
using namespace std;
class Sort
{
	int c;
	public:
	void show(int*y,int N)
	{
		for(int i=0;i<N;i++)
		cout<<y[i]<<" ";
	}
	int* selection_sort(int*y,int N)
	{
		int min;
		for(int i=0;i<N;i++)
		{
			min=find_min(y,i,N);
			c=y[i];
			y[i]=y[min];
			y[min]=c;
		}
	}
	int find_min(int*y,int start,int N)
	{
		int min=start;
		for(int i=start;i<N;i++)
		{
			if(y[min]>y[i])
			min=i;
		}
		return min;
	}
	int* insertion_sort(int*y,int N)
	{
		for(int i=1;i<N;i++)
		{
			for(int j=i-1;j>=0;j--)
			{
				if(y[j]>y[j+1])
				{
					c=y[j+1];
					y[j+1]=y[j];
					y[j]=c;
				}
			}
		}
	}
	int* bubble_sort(int*y,int N)
	{
		for(int i=1;i<=N-1;i++)
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
	Sort s;
	int a=5;
	int*y=new int[20];
	for(int i=0;i<5;i++)
	{
		y[i]=a;
		a--;
	}
	s.show(y,5);
	cout<<endl;
	s.bubble_sort(y,5);
//	s.insertion_sort(y,5);
//	s.selection_sort(y,5);
	s.show(y,5);
	cout<<endl;
//	cout<<s.find_min(y,1,5)<<endl;
}

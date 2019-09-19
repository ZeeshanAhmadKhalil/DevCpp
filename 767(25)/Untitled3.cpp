#include<iostream>
using namespace std;
class Max_heap
{
	int*y,index;
	public:
		Max_heap()
		{
			index=0;
			y=new int[10];
		}
		void insert(int value)
		{
			y[++index]=value;
		}
		void level_order()
		{
			for(int i=1;i<=index;i++)
			cout<<y[i]<<" ";
		}
		void percolate_up(int i)
		{
			int c;
			while(y[i]>y[i/2]&&i/2>0)
			{
				c=y[i];
				y[i]=y[i/2];
				y[i/2]=c;
				i=i/2;
			}
		}
		void percolate_down(int i)
		{
			int c;
			while((y[i]<y[2*i]||y[i]<y[2*i+1])&&(2*i<=index||(2*i+1)<=index))
			{
				if(y[i]<y[2*i]&&(y[2*i+1]<y[2*i]||2*i+1<index)&&2*i<=index)
				{
					c=y[i];
					y[i]=y[2*i];
					y[2*i]=c;
					i=2*i;
				}
				else if(y[i]<y[2*i+1]&&y[2*i]<y[2*i+1]&&2*i+1<=index)
				{
					c=y[i];
					y[i]=y[2*i+1];
					y[2*i+1]=c;
					i=2*i+1;
				}
			}
		}
		int N()
		{
			return index;
		}
		void remove_max()
		{
			y[1]=y[index--];
			percolate_down(1);
		}
		void remove_specific(int i)
		{
			y[i]=y[index--];
			percolate_up(i);
			percolate_down(i);
		}
		void asc(int N)
		{
			int z[N],x[N];
			for(int i=1;i<=N;i++)
			z[i]=y[i];
			for(int i=1;i<=N;i++)
			{
				x[i]=y[1];
				remove_max();
			}
			for(int i=N;i>0;i--)
			cout<<x[i]<<" ";
			for(int i=1;i<=N;i++)
			y[++index]=z[i];
		}
};
main()
{
	Max_heap m;
	int x[5]={1,2,3,4,5};
	for(int i=0;i<5;i++)
	{
		m.insert(x[i]);
	}
	cout<<"Before:";
	m.level_order();
	cout<<endl;
	for(int i=m.N()/2;i>0;i--)
	{
		m.percolate_down(i);
	}
	cout<<"After:";
	m.level_order();
	cout<<endl;
	cout<<"Ascending order"<<endl;
	m.asc(m.N());
	cout<<endl;
	m.remove_specific(2);
	cout<<"After removing node at 2:"<<endl;
	cout<<"Ascending order:"<<endl;
	m.asc(m.N());
	cout<<endl;
	m.remove_max();
	cout<<"After removing max:";
	m.level_order();
	cout<<endl;
//	m.level_order();
//	cout<<endl;
}

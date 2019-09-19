#include<iostream>
using namespace std;
class Tree
{
	int size,index;
	int*y;
	public:
		Tree()
		{
			size=20;
			y=new int[size];
			index=0;
		}
		remove_min()
		{
			if(is_empty()!=true)
			{
				y[1]=y[index--];
				percolate_down(1);
			}
		}
		remove(int i)
		{
			y[i]=y[index--];
			percolate_up(i);
			percolate_down(i);
		}
		insert(int value)
		{
			if(is_full()!=true)
			{
				y[++index]=value;
			}
		}
		percolate_up(int i)
		{
			int c;
			while(y[i]<y[i/2]&&i/2!=0)
			{
				c=y[i];
				y[i]=y[i/2];
				y[i/2]=c;
				i=i/2;
			}
		}
		percolate_down(int i)
		{
				int c;
				while((y[i]>y[2*i]||y[i]>y[2*i+1])&&(2*i<=index||2*i+1<=index))
				{
					if(y[i]>y[2*i]&&y[2*i+1]>y[2*i]&&2*i<=index)
					{
						c=y[i];
						y[i]=y[2*i];
						y[2*i]=c;
						i=2*i;
					}
					else if(y[i]>y[2*i+1]&&y[2*i]>y[2*i+1]&&2*i+1<=index)
					{
						c=y[i];
						y[i]=y[2*i+1];
						y[2*i+1]=c;
						i=2*i+1;
					}
				}
		}
		level_order()
		{
			for(int i=1;i<=index;i++)
			{
				cout<<y[i]<<" ";
			}
		}
		bool is_empty()
		{
			if(index==0)
			return true;
			return false;
		}
		bool is_full()
		{
			if(index==size)
			return true;
			return false;
		}
		int N()
		{
			return index;
		}
		void even_node()
		{
			for(int i=1;i<=index;i++)
			{
				if(y[i]%2==0)
				cout<<y[i]<<" ";
			}
		}
};
main()
{
	Tree t;
	int x[]={20,12,31,9,18,25,41,15,35,60,40};
	for(int i=0;i<11;i++)
	{
		t.insert(x[i]);
	}
	for(int i=t.N()/2;i>0;i--)
	{
		t.percolate_down(i);
	}
	cout<<"Level Order:";
	t.level_order();
	cout<<"even Nodes:";
	
//	cout<<endl;
//	cout<<"Removing min"<<endl;
//	t.remove_min();
//	cout<<"Level Order:";
//	t.level_order();
//	cout<<endl;
//	cout<<"Removing 6th index"<<endl;
//	t.remove(6);
//	cout<<"Level Order:";
//	t.level_order();
//	cout<<endl;
}

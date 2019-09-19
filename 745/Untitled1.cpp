#include<iostream>
using namespace std;
class Heap
{
	int*y,size,index,c;
	public:
		Heap()
		{
			index=0;
			size=20;
			y=new int[size];
		}
		void insert(int value)
		{
			if(is_full()!=true)
			{
				y[++index]=value;
			}
		}
		void percolate_up(int i)
		{
			while(y[i/2]>y[i]&&i/2!=0)
			{
				c=y[i/2];
				y[i/2]=y[i];
				y[i]=c;
				i=i/2;
			}
		}
		void percolate_down(int i)
		{
			while((y[2*i]>y[i]||y[2*i+1]>y[i])&&(2*i<=index||2*i+1<=index))
			{
				if(y[2*i]>y[i]&&(y[2*i]>y[2*i+1]||2*i+1>index)&&2*i<=index)
				{ 
//					cout<<"this"<<endl;
					c=y[2*i];
					y[2*i]=y[i];
					y[i]=c;
					i=2*i;
				}
				else if(y[2*i+1]>y[i]&&y[2*i+1]>y[2*i]&&2*i+1<=index)
				{
//					cout<<"this1"<<endl;
					c=y[2*i+1];
					y[2*i+1]=y[i];
					y[i]=c;
					i=2*i+1;
				}
			}
		}
		int N()
		{
			return index;
		}
		void level_order()
		{
			if(is_empty()!=true)
			{
				for(int i=1;i<=index;i++)
				cout<<y[i]<<" ";
			}
		}
		void remove_min()
		{
			if(is_empty()!=true)
			{
				y[1]=y[index--];
				percolate_down(1);
			}
		}
		void remove(int i)
		{
			if(is_empty()!=true)
			{
				y[i]=y[index--];
				percolate_up(i);
				percolate_down(i);
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
		bool is_leaf(int i)
		{
			if(2*i>index)
			return true;
			return false;
		}
		void leaf_nodes()
		{
			if(is_empty()!=true)
			{
				for(int i=1;i<=index;i++)
				{
					if(is_leaf(i)==true)
					cout<<y[i]<<" ";
				}
			}
		}
		void non_leaf_nodes()
		{
			if(is_empty()!=true)
			{
				for(int i=1;i<=index;i++)
				{
					if(is_leaf(i)!=true)
					cout<<y[i]<<" ";
				}
			}
		}
		bool is_even(int i)
		{
			if(y[i]%2==0)
			return true;
			return false;
		}
		void even_node()
		{
			for(int i=1;i<=index;i++)
			{
				if(is_even(i)==true)
				cout<<y[i]<<" ";
			}
		}
		void odd_node()
		{
			for(int i=1;i<=index;i++)
			{
				if(is_even(i)==false)
				cout<<y[i]<<" ";
			}
		}
};
main()
{
	Heap h;
	int x[]={10,9,8,7,6,5,4,3,2,1};
	for(int i=0;i<10;i++)
	h.insert(x[i]);
	for(int i=h.N()/2;i>0;i--)
	h.percolate_down(i);
//	cout<<h.N()<<endl;
	cout<<"Level Order:";
	h.level_order();
	cout<<endl;
	cout<<"Even value Nodes:";
	h.even_node();
	cout<<endl;
	cout<<"odd value Nodes:";
	h.odd_node();
	cout<<endl;
//	h.remove_min();
//	h.remove_min();
//	cout<<endl<<"Remiving min"<<endl;
//	cout<<"Level Order:";
//	h.level_order();
//	cout<<endl<<"Removing specific"<<endl;
//	h.remove(3);
//	cout<<"Level Order:";
//	h.level_order();
	cout<<endl<<"leaf nodes:";
	h.leaf_nodes();
	cout<<endl<<"Non leaf nodes:";
	h.non_leaf_nodes();
}

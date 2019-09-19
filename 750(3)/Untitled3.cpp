#include<iostream>
using namespace std;
class List
{
	int y[100],size,current;
	public:
		List()
		{
			size=0;
			current=0;
		}
		void insert(int value)
		{
			if(size!=100)
			{
				if(size==0)
				y[current]=value;
				else
				{
					for(int i=size;i>current;i--)
					{
//						cout<<"size1="<<size<<endl;
						y[i+1]=y[i];
					}
					y[++current]=value;
				}
				size++;
			}
		}
		int remove()
		{
			if(size!=0)
			{
				for(int i=current;i<size;i++)
				{
					y[i]=y[i+1];
				}
				size--;
			}
		}
		void next()
		{
			if(current!=size-1)
			current++;
		}
		void back()
		{
			if(current!=0)
			current--;
		}
		void start()
		{
			current=0;
		}
		void end()
		{
			current=size-1;
		}
		void get()
		{
			cout<<"current index="<<current<<endl;
			cout<<"current Value="<<y[current]<<endl;
			cout<<"Size="<<size<<endl;
		}
		int find(int value)
		{
			for(int i=0;i<=size-1;i++)
			{
				if(value==y[i])
				{
				cout<<"Found at index "<<i<<endl;
				return 0;
				}
			}
			cout<<"Not found"<<endl;
		}
};
main()
{
	List l;
	l.insert(1);
	l.insert(2);
	l.insert(3);
	l.insert(4);
	l.back();
	l.insert(10);
//	l.back();
//	l.back();
//	l.back();
//	l.back();
	l.back();
//	l.next();
	l.remove();
	l.next();
	l.start();
	l.end();
	l.get();
	l.find(5);
}

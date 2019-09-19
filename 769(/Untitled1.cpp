#include<iostream>
using namespace std;
class List
{
	int*y,size,current;
	public:
	List()
	{
		current=0;
		size=0;
		y=new int[1000];
	}
	void insert(int value)
	{
			for(int i=size;i>current;i--)
			y[i+1]=y[i];
			y[++current]=value;
			size++;
	}
	void remove()
	{
		if(is_empty()!=true)
		{
			for(int i=current;i<size;i++)
			y[i]=y[i+1];
			size--;
		}
	}
	void get()
	{
		cout<<"current="<<current<<endl;
		cout<<"current value="<<y[current]<<endl;
	}
	void next()
	{
		if(current!=size&&is_empty()!=true)
		current++;
	}
	void back()
	{
		if(current!=1)
		current--;
	}
	void start()
	{
		current=1;
	}
	bool is_empty()
	{
		if(size==0)
		return true;
		return false;
	}
	bool find(int value)
	{
		for(int i=1;i<=size;i++)
		{
			if(y[i]==value)
			return true;
		}
		return false;
	}
};
main()
{
	List l;
	l.insert(2);
	l.insert(4);
	l.insert(6);
	l.insert(8);
	l.start();
	l.insert(3);
	l.next();
//	l.remove();
	l.next();
	l.next();
	l.get();
	cout<<l.find(11)<<endl;
}

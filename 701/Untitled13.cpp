#include<iostream>
using namespace std;
class List
{
	int*array,size,current;
	public:
		List()
		{
			array=new int[5];
			size=0;
			current=0;
		}
		add(int value)
		{
			for(int i=size;i>current;i--)
			array[i+1]=array[i];
			array[++current]=value;
			size++;
		}
		remove()
		{
			if(size!=0)
			{
				for(int i=current;i<size;i++)
				array[i]=array[i+1];
				if(current==size)
				current--;
				size--;
			}
		}
		start()
		{
			if(size!=0)
			current=1;
		}
		next()
		{
			if(size!=0&&current!=size)
			current++;
		}
		get()
		{
			cout<<"Current value="<<array[current]<<endl;
			cout<<"size="<<size<<endl;
		}
		bool find(int value)
		{
			for(int i=1;i<=size;i++)
			{
				if(array[i]==value)
				return true;
				return false;
			}
		}
};
main()
{
	List l;
	l.add(1);
	l.add(2);
	l.add(3);
	l.remove();
	cout<<l.find(1)<<endl;
	cout<<l.find(3)<<endl;
//	l.start();
//	l.next();
//	l.add(0);
//	l.next();
	l.get();
}

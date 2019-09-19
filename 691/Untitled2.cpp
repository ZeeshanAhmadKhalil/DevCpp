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
			array[current]=0;
		}
		add(int value)
		{
			
				for(int i=size;i>current;i--)
				array[i+1]=array[i];
				array[++current]=value;
				size++;	
		}
		start()
		{
			if(size!=0)
			current=1;
		}
		next()
		{
			if(current!=size)
			current++;
		}
		back()
		{
			if(size!=0&&current!=1)
			current--;
		}
		remove()
		{
			if(size!=0)
			{
				for(int i=current;i<=size;i++)
				array[i]=array[i+1];
				if(current==size)
				current--;
				size--;
			}
		}
		
		get()
		{
			
			cout<<"size="<<size<<endl;
			cout<<"current="<<current<<endl;
			cout<<"Current value="<<array[current]<<endl;
		}
		find(int value)
		{
			if(size!=0)
			{
			int found=0;
			for(int i=1;i<=size;i++)
			{
				if(array[i]==value)
				{
					found=1;
					current=i;
				}
			}
			if(found==1)
			cout<<"Found at "<<current<<endl;
			else
			cout<<"not found"<<endl;
			}
		}
};
main()
{
	List l;
	l.add(1);
	l.add(2);
	l.add(4);
	l.find(0);
//	l.remove();
//	l.remove();
//	l.remove();
//	l.start();
//	l.next();
//	l.next();
//	l.next();
//	l.back();
//	l.back();
//	l.back();
//	l.add(0);
	l.get();
}

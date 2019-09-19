#include<iostream>
using namespace std;
class Stack
{
	int*y,size,current;
	public:
		Stack()
		{
			size=5;
			y=new int[5];
			current=-1;
		}
		void push(int value)
		{
			if(is_full()!=true)
			{
			y[++current]=value;
//			cout<<"Done"<<endl;	
			}
		}
		int pop()
		{
			if(is_empty()!=true)
			return y[current--];
		}
		int top()
		{
			if(is_empty()!=true)
			return y[current];
		}
		bool is_full()
		{
			if(current==size-1)
			return true;
			return false;
		}
		bool is_empty()
		{
			if(current==-1)
			return true;
			return false;
		}
};
main()
{
	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
//	s.push(6);
	cout<<"top="<<s.top()<<endl;
	cout<<"pop="<<s.pop()<<endl;
	cout<<"pop="<<s.pop()<<endl;
	cout<<"pop="<<s.pop()<<endl;
	cout<<"pop="<<s.pop()<<endl;
	cout<<"pop="<<s.pop()<<endl;
}

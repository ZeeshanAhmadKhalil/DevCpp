#include<iostream>
#include<conio.h>
using namespace std;
class Stack
{
	int*array,current;
	public:
		Stack()
		{
			array=new int[5];
			current=0;
		}
		push(int value)
		{
			if(is_full()==false)
			array[++current]=value;
		}
		int pop()
		{
			if(is_empty()==false)
			return array[current--];
		}
		int top()
		{
			return array[current];
		}
		bool is_empty()
		{
			if(current==0)
			return true;
			return false;
		}
		bool is_full()
		{
			if(current==5)
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
	s.pop();
	cout<<s.top()<<endl;
}

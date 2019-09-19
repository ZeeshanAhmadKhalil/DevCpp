#include<iostream>
using namespace std;
class Queue
{
	int*y,front,rare,size,no_of_elements;
	public:
		Queue()
		{
			size=5;
			y=new int[size];
			front=rare=-1;
			no_of_elements=0;
		}
		void enqueue(int value)
		{
			if(is_full()!=true)
			{
				if(no_of_elements==0)
				{
					front=rare=0;
					y[front]=value;
				}
				else
				{
					rare=(rare+1)%size;
					y[rare]=value;
				}
				no_of_elements++;
			}
		}
		int get_front()
		{
			if(is_empty()!=true)
			return y[front];
		}
		int dequeue()
		{
			if(is_empty()!=true)
			{
				int f=y[front];
				front=(front+1)%size;
				no_of_elements--;
				return f;
			}
		}
		bool is_full()
		{
			if(no_of_elements==size)
			return true;
			return false;
		}
		bool is_empty()
		{
			if(no_of_elements==0)
			return true;
			return false;
		}
};
main()
{
	Queue q;
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	cout<<q.dequeue()<<endl;
	cout<<q.get_front()<<endl;
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
}

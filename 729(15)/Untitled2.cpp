#include<iostream>
using namespace std;
template<class T>
class Queue
{
	int front,rare,no_of_elements,size;
	T array[5];
	public:
		Queue()
		{
			front=rare=-1;
			no_of_elements=0;
		}
		enqueue(int value)
		{
			if(is_full()==false)
			{
				if(no_of_elements==0)
				front=(front+1)%5;
				rare=(rare+1)%5;
				array[rare]=value;
				no_of_elements++;
			}
		}
		int get_front()
		{
			if(is_empty()==false)
			return array[front];
		}
		int dequeue()
		{
			if(is_empty()==false)
			{
				int v=array[front];
				front=(front+1)%5;
				no_of_elements--;
				return v;
			}
		}
		get()
		{
			cout<<array[front]<<endl;
			cout<<array[rare]<<endl;
		}
		bool is_full()
		{
			if(no_of_elements==5)
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
	Queue<int>q;
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	q.enqueue(5);
	cout<<q.get_front()<<endl;
	cout<<q.dequeue()<<endl;
	q.enqueue(6);
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
}

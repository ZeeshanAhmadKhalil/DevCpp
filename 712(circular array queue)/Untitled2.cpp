#include<iostream>
using namespace std;
class Queue
{
	int*array,size,no_of_elements,front,rare;
	public:
		Queue()
		{
			size=5;
			array=new int[size];
			no_of_elements=front=rare=0;
		}
		bool is_full()
		{
			return no_of_elements==size;
		}
		bool is_empty()
		{
			return no_of_elements==0;
		}
		sort()
		{
			int c;
			for(int i=1;i<no_of_elements;i++)
			{
				int k;
				k=front;
				for(int j=1;j<no_of_elements;j++)
				{
					if(array[k]>array[(k+1)%size])
					{
						c=array[k];
						array[k]=array[(k+1)%size];
						array[(k+1)%size]=c;
					}
					k=(k+1)%size;
				}
			}
		}
		void enqueue(int value)
		{
			if(is_full()!=true)
			{
				if(no_of_elements==0)
				{
					array[rare]=value;
				}
				else
				{
					rare=(rare+1)%size;
					array[rare]=value;
				}
				no_of_elements++;
				sort();
			}
		}
		int dequeue()
		{
			if(is_empty()!=true)
			{
				int value;
				value=array[front];
				array[front]=0;
				front=(front+1)%size;
				no_of_elements--;
				return value;
			}
		}
		int get_front()
		{
			if(is_empty()!=true)
			return array[front];
		}
};
main()
{
	Queue q;
	q.enqueue(5);
	q.enqueue(4);
	q.enqueue(3);
	q.enqueue(2);
	q.enqueue(1);
//	q.enqueue(6);
	cout<<"Dequeued front="<<q.dequeue()<<endl;
	cout<<"Dequeued front="<<q.dequeue()<<endl;
	cout<<"Dequeued front="<<q.dequeue()<<endl;
	cout<<"Dequeued front="<<q.dequeue()<<endl;
	q.enqueue(-1);
//	q.enqueue(22);
//	q.enqueue(33);
	cout<<"Dequeued front="<<q.dequeue()<<endl;
	cout<<"Dequeued front="<<q.dequeue()<<endl;
}

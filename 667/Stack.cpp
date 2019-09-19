#include"Node.cpp"
template <class T>
using namespace Stack<T>
class Stack
{
	Node*head;
	int size;
	public:
		Stack()
		{
			size=0;
			head=NULL;
		}
		push(T value)
		{
			Node*new_node=new Node();
			new_node->set_value(value);
			new_node->set_next(head);
			head=new_node;
			size++;
		}
		T pop()
		{
			if(is_empty()==false)
			{
				T n=head->get_value();
				Node*m=head;
				head=head->get_next();
				delete m;
				return n;
			}
			else
			return -1;
		}
		T top()
		{
			if(is_empty()==false)
			return head->get_value();
			else 
			return -1;
		}
		bool is_empty()
		{
			if(head==NULL)
			return true;
			return false;
		}
};

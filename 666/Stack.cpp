#include"Node.cpp"
class CharStack
{
	CharNode*head;
	int size;
	public:
		CharStack()
		{
			size=0;
			head=NULL;
		}
		push(char value)
		{
			CharNode*new_node=new CharNode();
			new_node->set_value(value);
			new_node->set_next(head);
			head=new_node;
			size++;
		}
		char pop()
		{
			if(is_empty()==false)
			{
				int n=head->get_value();
				CharNode*m=head;
				head=head->get_next();
				delete m;
				return n;
			}
			else
			return -1;
		}
		char top()
		{
			if(is_empty()==false)
			return head->get_value();
			else 
			return -1;
		}
		bool is_empty()
		{
			if(head==0)
			return true;
			return false;
		}
};

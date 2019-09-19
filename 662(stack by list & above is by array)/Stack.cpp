#include"Node.cpp"
template<class T>
class Stack
{
	Node*head;
	int size;
	public:
	Stack();
	push(T value);
	T pop();
	T top();
	bool is_empty();
};
template<class T>
Stack<T>::Stack()
{
	size=0;
	head=NULL;
}
template<class T>
Stack<T>::push(T value)
{
	Node*new_node=new Node();
	new_node->set_value(value);
	new_node->set_next(head);
	head=new_node;
	size++;
}
template<class T>
T Stack<T>::pop()
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
template<class T>
T Stack<T>::top()
{
	if(is_empty()==false)
	return head->get_value();
	else 
	return -1;
}
template<class T>
bool Stack<T>::is_empty()
{
	if(head==NULL)
	return true;
	return false;
}

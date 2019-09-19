#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
template<class N>
class Node
{
	N value;
	Node*next;
	public:
		set_next(Node*next)
		{
			this->next=next;
		}
		Node*get_next()
		{
			return next;
		}
		set_value(N value);
		N get_value();
};
template<class N>
Node<N>::set_value(N value)
{
	this->value=value;
}
template<class N>
N Node<N>::get_value()
{
	return value;
}
main()
{
}

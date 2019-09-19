#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
class CharNode
{
	char value;
	CharNode*next;
	public:
		set_value(char value)
		{
			this->value=value;
		}
		char get_value()
		{
			return value;
		}
		set_next(CharNode*next)
		{
			this->next=next;
		}
		CharNode*get_next()
		{
			return next;
		}
};

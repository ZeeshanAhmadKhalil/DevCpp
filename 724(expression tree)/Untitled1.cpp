#include<iostream>
using namespace std;
template<class T>
class Stack
{
	T y[50];
	int current;
	public:
		Stack()
		{
			current=0;
		}
		push(T value)
		{
			y[++current]=value;
		}
		T pop()
		{
			return y[current--];
		}
		T top()
		{
			return y[current];
		}
};
main()
{
	
}

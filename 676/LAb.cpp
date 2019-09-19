#include<iostream>
#include<string>
#include<stdlib.h>
#include<math.h>
using namespace std;
template<class T>
class Stack
{
	int current;
	int size;
	T*array;
	public:
	Stack();
	push(T value);
	T pop();
	T top();
	bool is_empty();
	bool is_full();
};
template<class T>
Stack<T>::Stack()
{
	current=0;
	size=0;
	array=new T[size];
}
template<class T>
Stack<T>::push(T value)
{
	size++;
	array[++current]=value;
}
template<class T>
T Stack<T>::pop()
{
	return array[current--];
}
template<class T>
T Stack<T>::top()
{
	return array[current];
}
main()
{
	Stack<char>c;
	Stack<int>i;
	i.push(1);
	c.push('a');
	cout<<"c pop="<<c.pop()<<endl;
	cout<<"i pop="<<i.pop()<<endl;
}

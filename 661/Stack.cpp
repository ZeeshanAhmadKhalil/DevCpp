template<class T>
class Stack
{
	T*array;
	int current;
	int size;
	public:
		Stack();
		push(T value);
		T pop();
		T top();
		bool is_full();
		bool is_empty();
};
template<class T>
Stack<T>::Stack()
{
	size=5;
	array=new T[size];
	current=-1;
}
template<class T>
Stack<T>::push(T value)
{
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
template<class T>
bool Stack<T>::is_full()
{
	if(current==(size-1))
	return true;
	return false;
}
template<class T>
bool Stack<T>::is_empty()
{
	if(current==-1)
	return true;
	return false;
}

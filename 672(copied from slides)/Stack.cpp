#include <iostream>
#include <stdlib.h>
#define MAXSTACKSIZE 50
using namespace std;
template <class T>
class Stack {
public:
    Stack();
    int is_empty(void); 
    int push(T value); // 1=successful,0=stack overflow
    T pop(void);
    T peek(void);
    ~Stack();
private:
    int top;
    T* nodes;
}; 
template <class T>
Stack<T>::Stack()
{
    top = -1;
    nodes = new T[MAXSTACKSIZE];
}
template <class T>
Stack<T>::~Stack()
{
    delete nodes;
}

template <class T>
int Stack<T>::is_empty()
{
    if( top < 0 ) return 1;
    return 0;
}
template <class T>
int Stack<T>::push(T x)
{
    if( top < MAXSTACKSIZE ) {
        nodes[++top] = x;
        return 1;
    }
    cout << "stack overflow in push.\n";
    return 0;
}
template <class T>
T Stack<T>::pop(void)
{
    T x;
    if( !is_empty() ) {
        x = nodes[top--];
        return x;
    }
    cout << "stack underflow in pop.\n";
    return x;
}
int main(int argc, char *argv[]) {
  Stack<int> intstack;
  Stack<char> charstack;
  int x=10, y=20;
  char c='C', d='D';
  
  intstack.push(x);   intstack.push(y);
  cout << "intstack: " << intstack.pop() << ", " 
	     << intstack.pop() << "\n";
  
  charstack.push(c); charstack.push(d);
  cout << "charstack: " << charstack.pop() << ", " 
       << charstack.pop() << "\n";
}



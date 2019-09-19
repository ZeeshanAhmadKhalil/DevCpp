#include<iostream>
using namespace std;
template<class T>
class Queue
{
	T array[50];
	int front,rare,no_of_elements,size;
	public:
		Queue()
		{
			front=rare=-1;
			no_of_elements=0;
			size=50;
		}
		bool is_empty()
		{
			if(no_of_elements==0)
			return true;
			return false;
		}
		T dequeue()
		{
			if(is_empty()!=true)
			{
				T v=array[front];
				front=(front+1)%size;
				no_of_elements--;
				return v;
			}
		}
		T get_front()
		{
			if(is_empty()!=true)
			return array[front];
		}
		void enqueue(T value)
		{
			if(front==-1)
			front=(front+1)%size;
			rare=(rare+1)%size;
			array[rare]=value;
			no_of_elements++;
		}
		
};
template<class T>
class Stack
{
	T array[50];
	int current;
	public:
		Stack()
		{
			current=0;
		}
		push(T value)
		{
			array[++current]=value;
		}
		T pop()
		{
			
			if(is_empty()!=true)
			return array[current--];
		}
		T top()
		{
			if(is_empty()!=true)
			return array[current];
		}
		bool is_empty()
		{
			if(current==0)
			return true;
			return false;
		}
};
template<class T>
class Tree_node
{
	T value;
	Tree_node*left;
	Tree_node*right;
	public:
		Tree_node()
		{
			value=0;
			left=right=NULL;
		}
		set_value(T value)
		{
			this->value=value;
		}
		T get_value()
		{
			return value;
		}
		set_left(Tree_node*left)
		{
			this->left=left;
		}
		Tree_node*get_left()
		{
			return left;
		}
		set_right(Tree_node*right)
		{
			this->right=right;
		}
		Tree_node*get_right()
		{
			return right;
		}
};
class Tree
{
	Tree_node<int>*p,*q;
	public:
		insert(Tree_node<int>*root,int value)
		{
			Tree_node<int>*new_node=new Tree_node<int>();
			new_node->set_value(value);
			p=q=root;
			while(q!=NULL&&p->get_value()!=value)
			{
				p=q;
				if(value<p->get_value())
				q=p->get_left();
				else if(value>p->get_value())
				q=p->get_right();
			}
			if(value<p->get_value())
			p->set_left(new_node);
			else if(value>p->get_value())
			p->set_right(new_node);
			else
			delete new_node;
		}
		get(Tree_node<int>*root)
		{
			cout<<root->get_value()<<endl;
			cout<<root->get_left()->get_value()<<endl;
			cout<<root->get_right()->get_value()<<endl;
		}
		inorder(Tree_node<int>*root)
		{
			Stack<Tree_node<int>*>s;
			p=root;
			while(p!=NULL||s.is_empty()!=true)
			{
				while(p!=NULL)
				{
					s.push(p);
					p=p->get_left();
				}
				p=s.pop();
				cout<<p->get_value()<<" ";
				p=p->get_right();
			}
		}
		preorder(Tree_node<int>*root)
		{
			Stack<Tree_node<int>*>s;
			p=root;
			while(p!=NULL||s.is_empty()!=true)
			{
				while(p!=NULL)
				{
					cout<<p->get_value()<<" ";
					s.push(p);
					p=p->get_left();
				}
				p=s.pop();
				p=p->get_right();
			}
		}
		postorder(Tree_node<int>*root)
		{
			int v;
			Stack<Tree_node<int>*>s;
			p=root;
			while(p!=NULL||s.is_empty()!=true)
			{
				while(p!=NULL)
				{
					s.push(p);
					p=p->get_left();
				}
				p=s.top();
				if(p->get_right()==NULL||p->get_right()->get_value()==v)
				{
					v=s.pop()->get_value();
					cout<<v<<" ";
					p=NULL;
				}
				else
				p=p->get_right();
			}
		}
		levelorder(Tree_node<int>*root)
		{
			Queue<Tree_node<int>*>q;
			q.enqueue(root);
			while(q.is_empty()!=true)
			{
				p=q.dequeue();
				if(p!=NULL)
				cout<<p->get_value()<<" ";
				if(p->get_left()!=NULL)
				q.enqueue(p->get_left());
				if(p->get_right()!=NULL)
				q.enqueue(p->get_right());
//				cout<<"here"<<endl;
			}
		}
		int find(Tree_node<int>*root,int value)
		{
			int found=0;
			p=q=root;
//			if(value==r)
			while(q!=NULL)
			{
//				cout<<p->get_value()<<endl;
				p=q;
				if(value<p->get_value())
				q=p->get_left();
				else if(value>p->get_value())
				q=p->get_right();
				else
				{
				found=1;
				break;
				}
			}
			if(found==1)
			cout<<"found"<<endl;
			else
			cout<<"not found"<<endl;
		}
};
main()
{
//	Stack<int>s;
//	s.push(1);
//	s.push(2);
//	s.push(3);
//	s.push(4);
//	cout<<s.pop()<<endl;
//	cout<<s.pop()<<endl;
//	cout<<s.pop()<<endl;
//	cout<<s.pop()<<endl;
//	Queue<int>q;
//	q.enqueue(1);
//	q.enqueue(2);
//	q.enqueue(3);
//	q.enqueue(4);
//	q.enqueue(5);
//	cout<<q.dequeue()<<endl;
//	q.enqueue(6);
//	cout<<q.dequeue()<<endl;
//	cout<<q.dequeue()<<endl;
//	cout<<q.dequeue()<<endl;
//	cout<<q.dequeue()<<endl;
//	cout<<q.dequeue()<<endl;
	Tree t;
	Tree_node<int>*root=new Tree_node<int>();
	int x[]={8,10,5,9,11,6};
	root->set_value(x[0]);
	for(int i=1;i<6;i++)
	t.insert(root,x[i]);
//	t.get(root);
	cout<<"inorder:";
	t.inorder(root);
	cout<<endl;
	cout<<"preorder:";
	t.preorder(root);
	cout<<endl;
	cout<<"postorder:";
	t.postorder(root);
	cout<<endl;
	cout<<"Levelorder:";
	t.levelorder(root);
	cout<<endl;
	t.find(root,6);
	
}

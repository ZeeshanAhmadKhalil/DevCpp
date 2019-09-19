#include<iostream>
#include<string.h>
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
	Tree_node<string>*p,*q;
	Stack<Tree_node<string>*>s;
//	Queue<Tree_node<int>*>qu;
	public:
		insert(Tree_node<string>*root,string value)
		{
			Tree_node<string>*new_node=new Tree_node<string>();
			new_node->set_value(value);
			p=q=root;
			while(q!=NULL&&p->get_value()!=value)
			{
				p=q;
				if(value.compare(p->get_value())<0)
				q=p->get_left();
				else if(value.compare(p->get_value())>0)
				q=p->get_right();
			}
			if(value.compare(p->get_value())<0)
			p->set_left(new_node);
			else if(value.compare(p->get_value())>0)
			p->set_right(new_node);
			else
			delete new_node;
		}
		inorder(Tree_node<string>*root)
		{
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
//		preorder(Tree_node<int>*root)
//		{
//			p=root;
//			while(p!=NULL||s.is_empty()!=true)
//			{
//				while(p!=NULL)
//				{
//					cout<<p->get_value()<<" ";
//					s.push(p);
//					p=p->get_left();
//				}
//				p=s.pop();
//				p=p->get_right();
//			}
//		}
//		postorder(Tree_node<int>*root)
//		{
//			int v;
//			p=root;
//			while(p!=NULL||s.is_empty()!=true)
//			{
//				while(p!=NULL)
//				{
//					s.push(p);
//					p=p->get_left();
//				}
//				p=s.top();
//				if(p->get_right()==NULL||v==p->get_right()->get_value())
//				{
//					v=s.pop()->get_value();
//					cout<<v<<" ";
//					p=NULL;
//				}
//				else
//				p=p->get_right();
//			}
//		}
//		levelorder(Tree_node<int>*root)
//		{
//			p=root;
//			qu.enqueue(p);
//			while(qu.is_empty()!=true)
//			{
//				p=qu.dequeue();
//				cout<<p->get_value()<<" ";
//				if(p->get_left()!=NULL)
//				qu.enqueue(p->get_left());
//				if(p->get_right()!=NULL)
//				qu.enqueue(p->get_right());
//			}
//		}
//		Tree_node<int>*remove(Tree_node<int>*root,int value)
//		{
//			Tree_node<int>*t;
//			int cmp=value-root->get_value();
//			if(cmp<0)
//			{
//				t=remove(root->get_left(),value);
//				root->set_left(t);
//			}
//			else if(cmp>0)
//			{
//				t=remove(root->get_right(),value);
//				root->set_right(t);
//			}
//			else if(root->get_left()!=NULL&&root->get_right()!=NULL)
//			{
//				int m=min(root->get_right());
//				root->set_value(m);
//				t=remove(root->get_right(),m);
//				root->set_right(t);
//			}
//			else
//			{
//				Tree_node<int>*node_to_delete=root;
//				if(root->get_left()==NULL)
//				root=root->get_right();
//				else if(root->get_right()==NULL)
//				root=root->get_left();
//				delete node_to_delete;
//			}
//			return root;
//		}
//		int min(Tree_node<int>*root)
//		{
//			if(root->get_left()==NULL)
//			return root->get_value();
//			min(root->get_left());
//		}
};
main()
{
	Tree t;
	Tree_node<string>*root=new Tree_node<string>();
	string x[]={"bilal","zeeshan","faizan","tahir","ali","hamza"};
	root->set_value(x[0]);
	for(int i=1;i<6;i++)
	t.insert(root,x[i]);
//	t.remove(root,10);
////	t.get(root);
	cout<<"inorder:";
	t.inorder(root);
	cout<<endl;
//	cout<<"preorder:";
//	t.preorder(root);
//	cout<<endl;
//	cout<<"postorder:";
//	t.postorder(root);
//	cout<<endl;
//	cout<<"Levelorder:";
//	t.levelorder(root);
//	cout<<endl;
//	t.find(root,6);
}

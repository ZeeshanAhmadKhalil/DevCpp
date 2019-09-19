#include<iostream>
#include<string.h>
using namespace std;
class Tree_node
{
	string info,number,number1,number2,number3,number4;
	Tree_node*left,*right;
	public:
		Tree_node()
		{
			left=right=NULL;
		}
		set_info(string info)
		{
			this->info=info;
		}
		string get_info()
		{
			return info;
		}
		set_number(string number)
		{
			this->number=number;
		}
		set_number1(string number1)
		{
			this->number1=number1;
		}
		set_number2(string number2)
		{
			this->number2=number2;
		}
		set_number3(string number3)
		{
			this->number3=number3;
		}
		set_number4(string number4)
		{
			this->number4=number4;
		}
		string get_number()
		{
			return number;
		}
		string get_number1()
		{
			return number1;
		}
		string get_number2()
		{
			return number2;
		}
		string get_number3()
		{
			return number3;
		}
		string get_number4()
		{
			return number4;
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
	Tree_node*p,*q;
	public:
		insert(Tree_node*root,string info,string number,string number1,string number2,string number3,string number4)
		{
			Tree_node*new_node=new Tree_node();
			new_node->set_info(info);
			new_node->set_number(number);
			new_node->set_number1(number1);
			new_node->set_number2(number2);
			new_node->set_number3(number3);
			new_node->set_number4(number4);
			p=q=root;
			while(q!=NULL&&info.compare(p->get_info())!=0)
			{
//			cout<<"here"<<endl;
				p=q;
				if(info.compare(p->get_info())>0)
				q=p->get_right();
				else if(info.compare(p->get_info())<0)
				q=p->get_left();
				else
				break;
			}
			if(info.compare(p->get_info())>0)
			p->set_right(new_node);
			else if(info.compare(p->get_info())<0)
			p->set_left(new_node);
			else
			delete new_node;
		}
		inorder(Tree_node*N)
		{
			if(N!=NULL)
			{
			inorder(N->get_left());
			cout<<N->get_info()<<" 		"<<N->get_number()<<" 		"<<N->get_number1()<<"	 	"<<N->get_number2()<<"		 "<<N->get_number3()<<" 		"<<N->get_number4()<<" "<<endl;
			inorder(N->get_right());
			}
		}
};
main()
{
	int no;
	string value1,value2,value3,value4,value5,value6;
	Tree t;
	Tree_node*root=new Tree_node();
	more_numbers:
	system("cls");
	cout<<"Enter the no of Courses you want to enter"<<endl;
	cin>>no;
	for(int i=0;i<no;i++)
	{
		cout<<"Course "<<i+1<<endl;
		cin>>value1;
		cout<<"Subjects "<<endl;
		cin>>value2;
		cin>>value3;
		cin>>value4;
		cin>>value5;
		cin>>value6;
		if(i!=0)
		t.insert(root,value1,value2,value3,value4,value5,value6);
		else
		{
			root->set_info(value1);
			root->set_number(value2);
			root->set_number1(value3);
			root->set_number2(value4);
			root->set_number3(value5);
			root->set_number4(value6);
		}
	}
	cout<<"1 to enter more numbers"<<endl;
	cout<<"2 to show all the numbers"<<endl;
	int c;
	cin>>c;
	if(c==1)
	goto more_numbers;
	else if(c==2)
	{
		system("Cls");
		cout<<"Course     Subject1  	  Subject2	    Subject3	    Subject4	       Subject5"<<endl<<endl;
		t.inorder(root);
		cout<<endl;
		system("pause");
		goto more_numbers;
	}
	else 
	cout<<"Thank you"<<endl;
}

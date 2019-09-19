#include<iostream>
using namespace std;
bool is_leaf(int a_0,int*leaf,int no_of_leaves)
{
	for(int i=0;i<no_of_leaves;i++)
	{
		if(a_0==leaf[i])
		return true;
	}
	return false;
}
int main()
{
	int a[20],*leaf,no_of_leaves;
	for(int i=0;i<20;i++)
	{
		a[i]=0;
//		if(i<10)
//		leaf[i]=0;
	}
	int n=0,temp;
	int input,input1,goal;
	cout<<"Enter Number of leaf nodes in your tree:";
	cin>>no_of_leaves;
	leaf=new int[no_of_leaves];
	cout<<"Enter values of leaf nodes in your tree:";
	for(int i=0;i<no_of_leaves;i++)
	{
		cin>>leaf[i];
	}
//	for(int i=0;i<no_of_leaves;i++)
//	{
//		cout<<leaf[i]<<" ";
//	}
//	cout<<endl;
	cout<<"Enter the Goal:";
	cin>>goal;
	cout<<"Enter The root of the tree:";
	cin>>input;
	a[0]=input;
	while(a[0]!=goal)
	{
//		cout<<"a[0]="<<a[0]<<endl;
//		cout<<"a[1]="<<a[1]<<endl;
//		cout<<"There n="<<n<<endl;
//		cout<<"Printing Intermediate"<<endl;
//		for(int i=0;a[i]!=0;i++)
//		{
//			cout<<a[i]<<" ";
//		}
//		cout<<endl;
		if(!is_leaf(a[0],leaf,no_of_leaves))
		{
			cout<<"Enter Childs of "<<a[0]<<":";
			cin>>input;
			cin>>input1;
			if(a[1]==0)
			{
				a[0]=input;
				a[1]=input1;
			}
			else
			{
//				cout<<"here n="<<n<<endl;
				temp=n;
				while(n!=0)
				{
//					cout<<"at [a"<< n<<"]="<<n<<endl;
					a[n+1]=a[n];
					n--;
				}
				n=temp;
//				cout<<"New Check="<<a[0]<<endl;
//				cout<<"New Check"<<a[1]<<endl;
//				cout<<"New Check"<<input<<endl;
//				cout<<"New Check"<<input1<<endl;
				a[0]=input;
				a[1]=input1;
//				cout<<"New Check"<<a[0]<<endl;
//				cout<<"New Check"<<a[1]<<endl;
//				cout<<"Printing Intermediate"<<endl;
//				for(int i=1;i<20;i++)
//				{
//					cout<<a[i]<<" ";
//				}
			}
			n++;
//			cout<<"Changed in if"<<endl;
		}
		else
		{
//			cout<<"Printing Intermediate 1.5"<<endl;
//			for(int i=0;a[i]!=0;i++)
//			{
//				cout<<a[i]<<" ";
//			}
//			cout<<endl;
//			cout<<"in else n="<<n<<endl;
			temp=1;
			while(temp!=n+1)
			{
				a[temp-1]=a[temp];
				temp++;
			}
//			cout<<"Changed in else"<<endl;
			a[n--]=0;
		}
//		cout<<"Printing Intermediate 2"<<endl;
//		for(int i=0;i<20;i++)
//		{
//			cout<<a[i]<<" ";
//		}
//		cout<<endl;
	}
	cout<<"Goal Found:"<<a[0]<<endl;
	cout<<"The Remaning Queue is:";
	for(int i=1;a[i]!=0;i++)
	{
		cout<<a[i]<<" ";
	}
}


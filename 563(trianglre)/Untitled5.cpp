#include<iostream>
using namespace std;
class Triangle 
{
	public:
		show()
		{
			for(int i=1;i<=5;i++)
			{
				for(int j=5;j>i;j--)
				cout<<" ";
				for(int k=1;k<=(2*i-1);k++)
				cout<<"*";
				cout<<endl;
			}
			for(int i=5;i>=1;i--)
			{
				for(int j=5;j>i;j--)
				cout<<" ";
				for(int k=1;k<=(2*i-1);k++)
				cout<<"*";
				cout<<endl;
			}
			for(int a=0;a>-1;a++)
			{
				for(int i=1;i<=5;i++)
			{
				for(int j=5;j>i;j--)
				cout<<" ";
				for(int k=1;k<=(2*i-1);k++)
				cout<<"*";
				cout<<endl;
			}
			for(int i=5;i>=1;i--)
			{
				for(int j=5;j>i;j--)
				cout<<" ";
				for(int k=1;k<=(2*i-1);k++)
				cout<<"*";
				cout<<endl;
			}
			}	
		}
};
main()
{
	Triangle t;
	t.show();
}

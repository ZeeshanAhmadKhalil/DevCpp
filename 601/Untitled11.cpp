#include<iostream>
using namespace std;
class Triangles
{
	int a;
	public:
		set()
		{
			do
			{
				cout<<"(must be greater than 0)a=";
				cin>>a;
			}
			while(a<=0);
		}
		draw1()
		{
			for(int i=1;i<=a;i++)
			{
				for(int j=1;j<=i;j++)
				cout<<"*";
				cout<<endl;
			}
		}
		draw2()
		{
			for(int i=a;i>0;i--)
			{
				for(int j=1;j<=i;j++)
				cout<<"*";
				cout<<endl;
			}
		}
		draw3()
		{
			for(int i=a;i>0;i--)
			{
				for(int j=1;j<i;j++)
				cout<<" ";
				for(int k=a;k>=i;k--)
				cout<<"*";
				cout<<endl;
			}
		}
		draw4()
		{
			for(int i=1;i<=a;i++)
			{
				for(int j=1;j<i;j++)
				cout<<" ";
				for(int k=a;k>=i;k--)
				cout<<"*";
				cout<<endl;
			}
		}
};
main()
{
	Triangles t;
	t.set();
	t.draw1();
	t.draw2();
	t.draw3();
	t.draw4();
}

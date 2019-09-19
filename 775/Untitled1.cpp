#include<iostream>
using namespace std;
class Arrows
{
	public:
		void upward(int a)
		{
			for(int i=1;i<=a;i++)
			{
				for(int j=a;j>i;j--)
				cout<<" ";
				for(int k=(2*i-1);k>0;k--)
				cout<<"*";
				cout<<endl;
			}
			for(int i=1;i<=a;i++)
			{
				for(int j=1;j<=a/2;j++)
				cout<<" ";
				for(int j=1;j<=a;j++)
				cout<<"*";
				cout<<endl;
			}
		}
		void downward(int a)
		{
			for(int i=1;i<=a;i++)
			{
				for(int j=1;j<=a/2;j++)
				cout<<" ";
				for(int j=1;j<=a;j++)
				cout<<"*";
				cout<<endl;
			}
			for(int i=a;i>0;i--)
			{
				for(int j=a;j>i;j--)
				cout<<" ";
				for(int k=(2*i-1);k>0;k--)
				cout<<"*";
				cout<<endl;
			}
		}
};
main()
{
	Arrows a;
	a.upward(5);
	cout<<endl;
	cout<<"Arrow*2 and invert vertically"<<endl<<endl;
	a.downward(10);
	return 0;
}

#include<iostream>
using namespace std;
class Triangle
{
	int a;
	public:
	set_a()
	{
		cout<<"Enter the length:";
		cin>>a;
		while(a>50||a<0)
		{
			cout<<"Length(0-50)";
			cout<<"Enter the length:";
			cin>>a;
		}
	}
	show1()
	{
		for(int i=1;i<=a;i++)
		{
			for(int j=1;j<=i;j++)
			cout<<"*";
			cout<<endl;
		}
		
	}
	show2()
	{
		for(int i=a;i>0;i--)
		{
			for(int j=1;j<=i;j++)
			cout<<"*";
			cout<<endl;
		}
		
	}
	show3()
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
};
main()
{
	Triangle t;
	t.set_a();
	t.show1();
	t.show2();
	t.show3();
}

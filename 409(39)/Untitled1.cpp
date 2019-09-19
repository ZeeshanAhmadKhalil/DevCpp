                  //Lab Starric Triangle Program//
#include<iostream>
#include<ctype.h>//for isdigit()
#include<stdlib.h>//for atoi()
#include<string.h>
using namespace std;
class Starric
{
	private:
		char l[];
		int length;
	public:
		set()
		{
			for(int back=1;back==1;)
			{
				cout<<"Enter length(0-50):"<<endl;
				cin>>l;
				back=0;
				if(isdigit(l[0]))
				{
					length=atoi(l);
					if(length<0||length>50)
					back=1;
				}
				else
				back=1;
			}
		}
		show1()
		{
			for(int a=1;a<=length;a++)
			{
				for(int b=a;b<=length;b++)
				cout<<"*";
				cout<<endl;
			}
		}
		show2()
		{
			for(int a=length;a>0;a--)
			{
				for(int b=a;b<=length;b++)
				cout<<"*";
				cout<<endl;
			}
		}
		show3()
		{
			for(int a=length;a>0;a--)
			{
				for(int c=a;c>1;c--)
				cout<<" ";
				for(int b=a;b<=length;b++)
				cout<<"*";
				cout<<endl;
			}
		}
		show4()
		{
			for(int a=length;a>0;a--)
			{
				for(int c=a;c<length;c++)
				cout<<" ";
				for(int b=1;b<=a;b++)
				cout<<"*";
				cout<<endl;
			}
		}
};
main()
{
	Starric s;
	for(string back="y";back=="y";)
	{
		s.set();
		s.show1();
		cout<<endl;
		s.show2();
		cout<<endl;
		s.show3();
		cout<<endl;
		s.show4();
		label:
		cout<<"Continue(y/n):"<<endl;
		cin>>back;
		if(back=="n")
		cout<<"Thank You"<<endl;
		else if(back=="y")
		continue;
		else
		goto label;
	}
}

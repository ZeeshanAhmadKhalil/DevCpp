#include<iostream>
#include<windows.h>
using namespace std;
class Inputter
{
	int a;
	public:
		set()
		{
			cout<<"Enter order of equation(must >0)"<<endl;
			cin>>a;
			while(a<1)
			{
				system("cls");
				cout<<"Enter order of equation(must >0)"<<endl;
				cin>>a;
			}
		}
		show()
		{
			if(a==1)
			{
				cout<<"Your Equation is:"<<endl;
				cout<<"ax+b=0"<<endl;
			}
			if(a==2)
			{
				cout<<"Your Equation is:"<<endl;
				cout<<"ax^2+bx+c=0"<<endl;
			}
			if(a==3)
			{
				cout<<"Your Equation is:"<<endl;
				cout<<"ax^3+bx^2+cx+d=0"<<endl;
			}
			if(a==4)
			{
				cout<<"Your Equation is:"<<endl;
				cout<<"ax^4+bx^3+cx^2+dx+e=0"<<endl;
			}
		}
};
main()
{
	Inputter i;
	i.set();
	i.show();
	
}

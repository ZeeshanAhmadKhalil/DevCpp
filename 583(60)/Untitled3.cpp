#include<iostream>
using namespace std;
class Operator
{
	public:
		int a,b;
		set()
		{
			cout<<"a=";
			cin>>a;
			cout<<"b=";
			cin>>b;
		}
};
int operator+(Operator o1,Operator o2)
{
	return o1.a-o2.a;
}
int operator-(Operator o1,Operator o2)
{
	return o1.b+o2.b;
}
int operator*(Operator o1)
{
	return o1.a/o1.b;
}
main()
{
	Operator o1,o2;
	o1.set();
	cout<<*o1<<endl;
	o2.set();
	cout<<o1+o2<<endl;
	cout<<o1-o2<<endl;
}

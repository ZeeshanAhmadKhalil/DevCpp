#include<iostream>
#include<conio.h>
using namespace std;
class Marks
{
	private:
		int a,b,c;
	public:
	in()
	{
		cout<<"Enter ur marks"<<endl;
		cin>>a>>b>>c;
	}
	int sum()
	{
		return a+b+c;
	}
	float average()
	{
		return (a+b+c)/3;
	}
};
main()
{
	Marks m;
	int a;
	float b;
	m.in();
	a=m.sum();
	b=m.average();
	cout<<"Sum="<<a<<endl;
	cout<<"Average="<<b<<endl;
}

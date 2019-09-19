#include<iostream>
using namespace std;
class Book
{
	int id,pages,price;
	public:
		set()
		{
			cout<<"ID=";
			cin>>id;
			cout<<"Pages=";
			cin>>pages;
			cout<<"Price=";
			cin>>price;
		}
		int price1()
		{
			return price;
		}
		reset(int i,int pa,int pr)
		{
			id=i;
			pages=pa;
			price=pr;
			cout<<"ID="<<id<<endl;		
			cout<<"Pages="<<pages<<endl;
			cout<<"Price="<<price<<endl;
		}
		int price2()
		{
			return price;
		}
		costly_book(int p1,int p2)
		{
			if(p1>p2)
			{
				cout<<"Book 1 is costly"<<endl;
			}
			if(p1<p2)
			{
				cout<<"Book 2 is costly"<<endl;
			}
			else
			{
				cout<<"Both books hase same price"<<endl;
			}
		}
};
main()
{
	int p1,p2;
	Book b1,b2;
	cout<<"Data of Book 1"<<endl;
	b1.set();
	p1=b1.price1();
	cout<<"Data of Book 2"<<endl;
	b2.reset(2,125,300);
	p2=b2.price2();
	b1.costly_book(p1,p2);
}

#include<iostream>
using namespace std;
class Book
{
	int id,price,pages;
	public:
		set()
		{
			cout<<"ID=";
			cin>>id;
			cout<<"Price=";
			cin>>price;
			cout<<"pages=";
			cin>>pages;
		}
		reset(int i,int pr,int pa)
		{
			id=i;
			price=pr;
			pages=pa;
			cout<<"ID="<<id<<endl;
			cout<<"Price="<<price<<endl;
			cout<<"pages="<<pages<<endl;
		}
		int return_price()
		{
			return price;
		}
		costly_book(int p1,int p2)
		{
			if(p1>p2)
			{
				cout<<"Book 1 is costly"<<endl;
			}
			else if(p2>p1)
			{
				cout<<"Book 2 is costly"<<endl;
			}
		}
};
main()
{
	int p1,p2;
	Book b;
	b.set();
	p1=b.return_price();
	b.reset(2,300,350);
	p2=b.return_price();
	b.costly_book(p1,p2);
}

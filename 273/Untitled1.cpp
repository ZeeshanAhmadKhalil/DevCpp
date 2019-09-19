#include<iostream>
#include<conio.h>
using namespace std;
class book
{
	private:
	int price,pages,id;
	public:
	in()
	{
		cout<<"Price=";
		cin>>price;
		cout<<"Pages=";
		cin>>pages;
		cout<<"ID=";
		cin>>id;
	}
	show()
	{
		cout<<"Price="<<price<<endl;
		cout<<"Pages="<<pages<<endl;
		cout<<"ID="<<id<<endl;
	}
	int price1()
	{
		return price;
	}
};
main()
{
	book b1,b2,b3;
	cout<<"Information of book 1"<<endl;
	b1.in();
	cout<<"Information of book 2"<<endl;
	b2.in();
	cout<<"Information of book 3"<<endl;
	b3.in();
	cout<<"Data of most costly book"<<endl;
	if(b1.price1()>b2.price1()&&b2.price1()>b3.price1())
	b1.show();
	else if(b2.price1()>b1.price1()&&b1.price1()>b3.price1())
	b2.show();
	else if(b3.price1()>b2.price1()&&b2.price1()>b1.price1())
	b3.show();
	else
	cout<<"Any two books have equal price"<<endl;
}

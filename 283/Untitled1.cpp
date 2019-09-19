#include<iostream>
#include<conio.h>
using namespace std;
class Book
{
	private:
	int pages,price;
	string title;
	public:
	input()
	{
		cout<<"Pages=";
		cin>>pages;
		cout<<"Price=";
		cin>>price;
		cout<<"title=";
		cin>>title;
	}
	show()
	{
		cout<<"Pages="<<pages<<endl;
		cout<<"Price="<<price<<endl;
		cout<<"title="<<title<<endl;
	}
};
main()
{
	Book b1;
	cout<<"Book 1 data"<<endl;
	b1.input();
	Book b2(b1);
	Book b3=b1;
	cout<<"Book 2 data"<<endl;
	b2.show();
	cout<<"Book 3 data"<<endl;
	b3.show();
}

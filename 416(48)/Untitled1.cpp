#include<iostream>
#include<string.h>
using namespace std;
class Animal
{
	int legs;
	bool tail;
	public:
		Animal()
		{
		}
		set()
		{
			tail=true;
			legs=4;
		}
		display()
		{
			cout<<"Legs="<<legs<<endl;
			if(tail==true)
			cout<<"It has one tail"<<endl;
			else if(tail==false)
			cout<<"It has no tail"<<endl;
		}
		Animal(Animal&a)
		{
			cout<<"Deep copying From Zebra to Graffe"<<endl;
			legs=a.legs;
			tail=a.tail;
		}
};
main()
{
	Animal*zebra=new Animal();
	cout<<"Zebra:"<<endl;
	zebra->set();
	zebra->display();
	Animal*graffe=new Animal(*zebra);
	cout<<"Graffe"<<endl;
	graffe->display();
	Animal *lion=zebra;
	cout<<"Lion"<<endl;
	lion->display();
}

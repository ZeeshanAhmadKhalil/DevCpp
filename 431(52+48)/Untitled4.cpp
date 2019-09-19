#include<iostream>
#include<string.h>
using namespace std;
class Animal
{
	int weight;
	bool tail;
	static int count;
	public:
		Animal()
		{
			count++;
		}
		set()
		{
			weight=100;
			tail=true;
		}
		Animal(Animal&a)
		{
			weight=a.weight;
			tail=a.tail;
			count++;
		}
		Count()
		{
			cout<<"NO of animals="<<count<<endl;
		}
		display()
		{
			cout<<"Weight="<<weight<<endl;
			if(tail==true)
			cout<<"It has a tail"<<endl;
			else if(tail==false)
			cout<<"It has no tail"<<endl;
			else
			cout<<"Error"<<endl;
		}
};
int Animal::count;
main()
{
	Animal*zebra=new Animal();
	zebra->set();
	cout<<"Zebra"<<endl;
	zebra->display();
	Animal*graffe=new Animal(*zebra);
	cout<<"Graffe"<<endl;
	graffe->display();
	Animal*lion=new Animal();
	lion=zebra;
	cout<<"Lion"<<endl;
	lion->display();
	lion->Count();
	cout<<zebra<<endl<<lion<<endl;
}

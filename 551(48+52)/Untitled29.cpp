#include<iostream>
using namespace std;
class Animal
{
	int weight,legs;
	bool tail;
	static int count;
	public:
		Animal()
		{
			count++;
		}
		Animals_no()
		{
			cout<<"No of Animals="<<count<<endl;
		}
		set()
		{
			weight=100;
			legs=4;
			tail=true;
		}
		display()
		{
			cout<<"Weight="<<weight<<endl;
			cout<<"Legs="<<legs<<endl;
			if(tail==true)
			cout<<"It has one tail"<<endl;
			else if(tail==false)
			cout<<"It has no tail"<<endl;
		}
		Animal(Animal&a)
		{
			weight=a.weight;
			legs=a.legs;
			tail=a.tail;
			count++;
		}
		
};
int Animal::count;
main()
{
	Animal*zebra=new Animal();
	zebra->set();
	cout<<"Zebra:"<<endl;
	zebra->display();
	Animal*graffe=new Animal(*zebra);
	cout<<"Graffe:"<<endl;
	graffe->display();
	Animal*lion=new Animal();
	lion=zebra;
	cout<<"Lion"<<endl;
	lion->display();
	lion->Animals_no();
	cout<<zebra<<endl<<lion<<endl;
}

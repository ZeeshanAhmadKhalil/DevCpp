#include<iostream>
#include<string.h>
using namespace std;
class Animal
{
	static int count;
	int weight,legs;
	string nature;
	bool tail;
	public:
		Animal()
		{
			count++;
		}
		Animal(string nature,bool tail)
		{
			this->nature=nature;
			this->tail=tail;
			weight=100;
			legs=4;
			count++;
		}
		Animal(bool tail,string nature)
		{
			this->nature=nature;
			this->tail=tail;
			weight=100;
			legs=4;
			count++;
		}
		show()
		{
			cout<<"Nature="<<nature<<endl;
			if(tail==true)
			cout<<"It has one tail"<<endl;
			else
			cout<<"It has no tail"<<endl;
			cout<<"Weight="<<weight<<endl;
			cout<<"Legs="<<legs<<endl;
		}
		Animal(Animal&a)
		{
			nature=a.nature;
			tail=a.tail;
			weight=a.weight;
			legs=a.legs;
			count++;
		}
		Count()
		{
			cout<<"No of Animals="<<count<<endl;
		}
};
int Animal::count;
main()
{
	Animal*zebra=new Animal("Herbivore",1);
	cout<<"Zebra"<<endl;
	zebra->show();
	Animal*lion=new Animal("Carnivore",1);
	cout<<"Lion"<<endl;
	lion->show();
	Animal*graffe=new Animal();
	graffe=zebra;
	cout<<"graffe"<<endl;
	graffe->show();
	graffe->Count();
	cout<<zebra<<endl;
	cout<<graffe<<endl;
}

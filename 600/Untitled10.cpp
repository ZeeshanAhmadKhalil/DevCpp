#include<iostream>
#include<string.h>
using namespace std;
class Animal
{
	static int count;
	int weight,legs;
	bool tail;
	string nature;
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
//		Animal(Animal&a)
//		{
//			nature=a.nature;
//			tail=a.tail;
//			weight=a.weight;
//			legs=a.legs;
//			count++;
//		}
		Count()
		{
			cout<<"No of animals="<<count<<endl;
		}
};
int Animal::count;
main()
{
	Animal*zebra=new Animal("Herbivore",1);
	cout<<"Zebra:"<<endl;
	zebra->show();
	Animal*lion=new Animal(1,"Carnivore");
	cout<<"lion:"<<endl;
	lion->show();
	Animal*graffe=new Animal();
	graffe=zebra;
	cout<<"Graffe:"<<endl;
	graffe->show();
	cout<<"Adress of zebra="<<zebra<<endl;
	cout<<"Adress of graffe="<<graffe<<endl;
	zebra->Count();
}

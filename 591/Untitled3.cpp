#include<iostream>
using namespace std;
class Animal
{
	protected:
		int legs;
		bool tail;
		static int no_of_animals;
	public:
		Animal()
		{
			no_of_animals++;
		}
		set()
		{
			legs=4;
			tail=true;
		}
		show()
		{
			cout<<"Legs="<<legs<<endl;
			if(tail==true)
			cout<<"It has a tail"<<endl;
			else
			cout<<"It has no tail"<<endl;
		}
		Animal(Animal&a)
		{
			legs=a.legs;
			tail=a.tail;
			no_of_animals++;
		}
		No_of_animals()
		{
			cout<<"No if Animals="<<no_of_animals<<endl;
		}
};
int Animal::no_of_animals;
main()
{
	Animal*zebra=new Animal();
	zebra->set();
	cout<<"Zebra:"<<endl;
	zebra->show();
	Animal*graffe=new Animal(*zebra);
	cout<<"Graffe:"<<endl;
	graffe->show();
	Animal*lion=new Animal();
	lion=zebra;
	cout<<"Lion:"<<endl;
	lion->show();
	lion->No_of_animals();
	cout<<"adress if lion="<<lion<<endl;
	cout<<"adress if zebra="<<zebra<<endl;
}

#include<iostream>
using namespace std;
class Animal
{
	int legs;
	bool tail;
	static int no_of_animals;
	public:
		Animal()
		{
			no_of_animals++;
		}
		Animals()
		{
			cout<<"No Of Animals="<<no_of_animals<<endl;
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
			cout<<"It has one Tail"<<endl;
			else if(tail==false)
			cout<<"It has no Tail"<<endl;
		}
		Animal(Animal&a)
		{
			legs=a.legs;
			tail=a.tail;
			no_of_animals++;
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
	cout<<"Adresses:"<<endl;
	cout<<"zebra=   "<<zebra<<endl;
	cout<<"graffe=  "<<graffe<<endl;
	cout<<"lion=    "<<lion<<endl;
	lion->Animals();
}

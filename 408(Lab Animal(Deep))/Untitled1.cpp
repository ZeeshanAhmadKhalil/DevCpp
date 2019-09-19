#include<iostream>
#include<string.h>
using namespace std;
class Animal
{
	int weight,legs;
	string tail,name;
	bool herbivore=true;
	public:
		Animal()
		{
			cout<<"constructor 1 is called"<<endl;
			cout<<"Name=";
			cin>>name;
			if(herbivore==true)
			cout<<name<<" is a Herbivour"<<endl;
			else
			cout<<name<<" is a carnivore"<<endl;
			cout<<"Legs=";
			cin>>legs;
			cout<<"Tail(yes/no)=";
			cin>>tail;
			cout<<"Weight=";
			cin>>weight;
		}
		Animal(char*name,bool h)
		{
			cout<<"constructor 2 is called"<<endl;
			herbivore=h;
			this->name=name;
			cout<<"Name="<<name<<endl;
			if(herbivore==true)
			cout<<name<<" is a Herbivour"<<endl;
			else
			cout<<name<<" is a carnivore"<<endl;
			cout<<"Legs=";
			cin>>legs;
			cout<<"Tail(yes/no)=";
			cin>>tail;
			cout<<"Weight=";
			cin>>weight;
		}
		display()
		{
			cout<<"Name="<<name<<endl;
			if(herbivore==true)
			cout<<name<<" is a Herbivour"<<endl;
			else
			cout<<name<<" is a carnivore"<<endl;
			cout<<"Legs="<<legs<<endl;
			cout<<"Tail(yes/no)="<<tail<<endl;
			cout<<"Weight="<<weight<<endl;
		}
		Animal(Animal a)
		{
			name=a.name;
			weight=a.weight;
			herbivore=a.herbivore;
			legs=a.legs;
			tail=a.tail;
		}
		~Animal()
		{
			cout<<"Destructor is called"<<endl;
			name.erase();
			tail.erase();
			legs=0;
			weight=0;
		}
		
};
main()
{
	Animal Tiger("Tiger",false);
	cout<<endl;
	Animal giraffe=new Animal;
	cout<<endl<<"Copying giraffe to zebra"<<endl;
	Animal zebra=new Animal(giraffe);
	cout<<endl;
	zebra->display();
	
	
}

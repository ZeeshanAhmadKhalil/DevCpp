#include<iostream>
using namespace std;
class Woman
{
	public:
		eat()
		{
			cout<<"She eats on the land"<<endl;
		}
};
class Fish
{
	public:
		eat()
		{
			cout<<"She eats on the earth"<<endl;
		}
};
class Mermid:public Woman,public Fish
{
	public:
	
};
main()
{
	Mermid m;
	m.eat();//diamon error
}


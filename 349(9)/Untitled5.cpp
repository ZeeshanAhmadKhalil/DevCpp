#include<iostream>
#include<string.h>
using namespace std;
class TV
{
	string name,model;
	float price;
	public:
		TV()
		{
			name="Nobel";
			model="Music Engine";
			price=25,000;
		}
		out()
		{
			cout<<"Brand Name="<<name<<endl;
			cout<<"Model="<<model<<endl;
			cout<<"price="<<price<<endl;
		}
		reset()
		{
			cout<<"Brand Name=";
			cin>>name;
			cout<<"Model=";
			cin>>model;
			cout<<"price=";
			cin>>price;
		}
};
main()
{
	TV t;
	t.out();
	t.reset();
}


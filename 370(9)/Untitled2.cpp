#include<iostream>
#include<string.h>
using namespace std;
class TV
{
	string brand_name,model;
	int price;
	public:
		TV()
		{
			brand_name="Nobel";
			model="Music Engine";
			price=25000;
		}
		get()
		{
			cout<<"Brand Name="<<brand_name<<endl;
			cout<<"Model="<<model<<endl;
			cout<<"Price="<<price<<endl;
		}
		reset()
		{
			cout<<"Brand Name=";
			cin>>brand_name;
			cout<<"Model=";
			cin>>model;
			cout<<"Price=";
			cin>>price;
		}
};
main()
{
	TV t;
	t.get();
	cout<<endl;
	t.reset();
}

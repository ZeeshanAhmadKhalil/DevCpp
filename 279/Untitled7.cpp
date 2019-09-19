#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class TV
{
	private:
	char model[20],name[20];
	float price;
	public:
	change()
	{
		cout<<"model=";
		cin>>model;
		cout<<"name=";
		cin>>name;
		cout<<"price=";
		cin>>price;
	}
	show(char m[],char n[],float p)
	{
		strcpy(model,m);
		strcpy(name,n);
		price=p;
		cout<<"model="<<model<<endl;
		cout<<"name="<<name<<endl;
		cout<<"price="<<price<<endl;
	}
};
main()
{
	TV t;
	cout<<"Record of TV"<<endl;
	t.show("sn-12","sony",15000);
	cout<<"Changing record"<<endl;
	t.change();
}

#include<iostream>
#include<conio.h>
using namespace std;
class Travel
{
	private:
	int hr,km;
	public:
	Travel()
	{
		hr=0;
		km=0;
	}
	get()
	{
		cout<<"Km=";
		cin>>km;
		cout<<"hr=";
		cin>>hr;
		cout<<"You travelled "<<km<<"kms in "<<hr<<"hrs"<<endl;
	}
	add(Travel p)
	{
		Travel t;
		t.km=km+p.km;
		t.hr=hr+p.hr;
		cout<<endl<<"Total=You travelled "<<t.km<<"kms in "<<t.hr<<"hrs"<<endl;
	}
};
main()
{
	Travel a,b;
	a.get();
	b.get();
	a.add(b);
}

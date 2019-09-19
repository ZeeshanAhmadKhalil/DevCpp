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
	Travel add(Travel p)
	{
		Travel t;
		t.km=km+p.km;
		t.hr=hr+p.hr;
		return t;
	}
	show()
	{
		cout<<endl<<"Total=you travelled "<<km<<"kms in"<<hr<<"hrs"<<endl;
	}
};
main()
{
	Travel a,b;
	a.get();
	b.get();
	b=a.add(b);
	b.show();
	
}

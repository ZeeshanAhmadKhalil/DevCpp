#include<iostream>
using namespace std;
class Country
{
	char country[5][15];
	char character;
	public:
		set()
		{
			cout<<"Enter the names of countries"<<endl;
			for(int a=0;a<5;a++)
			{
				cin>>country[a];
			}
		}
		get()
		{
			cout<<"You entered following countries "<<endl;
			for(character='A';character<='Z';character++)
			{
				for(int a=0;a<5;a++)
				{
					if(country[a][0]==character)
					cout<<country[a]<<endl;
				}
			}
		}
};
main()
{
	Country c;
	c.set();
	c.get();
}

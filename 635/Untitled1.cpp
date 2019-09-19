#include<iostream>
using namespace std;
class FIZZDIZZ
{
	public:
	run()
	{
		for(int i=1;i<=100;i++)
		{	
			cout<<i<<"=";
			if(i%3==0)
			cout<<"FIZZ";
			if(i%5==0)
			cout<<"DIZZ";
			cout<<endl;
		}
	}
};
main()
{
	FIZZDIZZ f;
	f.run();
}

#include<iostream>
using namespace std;
class Temp
{
	float initial_temp,final_temp;
	int step_size;
	public:
		set()
		{
			do
			{
				cout<<"Intial Tempreture(>=0)=";
				cin>>initial_temp;
			}
			while(initial_temp<0);
			do
			{
				cout<<"Final Tempreture(<=50000)=";
				cin>>final_temp;
			}
			while(final_temp>50000);
			do
			{
				cout<<"Step Size(<"<<final_temp-initial_temp<<")=";
				cin>>step_size;
			}
			while(step_size>(final_temp-initial_temp));
		}
		compute()
		{
			cout<<"Celcius	|	Farenhite"<<endl;
			for(int a=initial_temp;a<=final_temp;a=a+step_size)
			{
				cout<<a<<"	"<<"|"<<"	"<<9/5*a+32<<endl;
			}
		}
};
main()
{
	Temp t;
	t.set();
	t.compute();
}

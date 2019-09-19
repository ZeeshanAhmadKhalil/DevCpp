#include<iostream>
using namespace std;
main()
{
	float start_temp,end_temp;
	int step_size;
	cout<<"Start Temprature=";
	cin>>start_temp;
	cout<<"End Tempratire=";
	cin>>end_temp;
	cout<<"Step size=";
	cin>>step_size;
	if(end_temp>50000)
	cout<<"End temprature is too high"<<endl;
	else if(start_temp<0)
	cout<<"Start temprature is too low"<<endl;
	else if(step_size>(end_temp-start_temp))
	cout<<"Wrong step size"<<endl;
	else
	{
		cout<<"Celcius			Farenhite"<<endl;
		for(int a=start_temp;a<=end_temp;a=a+step_size)
		{
			cout<<a<<"			"<<9/5*a+32<<endl;
		}
	}
}

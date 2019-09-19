#include<iostream>
using namespace std;
main()
{
	int initial_temp,final_temp,step_size;
	label:
	cout<<"Initial Temp(>0)=";
	cin>>initial_temp;
	while(initial_temp<0)
	{
		cout<<"Initial Temp(>0)=";
		cin>>initial_temp;
	}
	cout<<"Final Temp(<50000)=";
	cin>>final_temp;
	while(final_temp>50000)
	{
		cout<<"Final Temp(<50000)=";
		cin>>final_temp;
	}
	cout<<"Step_size=";
	cin>>step_size;
	while(step_size>(final_temp-initial_temp))
	{
		cout<<"Step_size=";
		cin>>step_size;
	}
	cout<<"celcius"<<"   "<<"Farenhite"<<endl;
	for(int a=initial_temp;a<final_temp;a=a+step_size)
	cout<<a<<"  |  "<<9/5*a+32<<endl;
	char back;
	cout<<"Continue(y/n)";
	cin>>back;
	if(back=='y')
	goto label;
}

#include<iostream>
#include<math.h>
using namespace std;
class Shape
{
	private:
		float height,width,per,hyp,radius;
	public:
		set_rec()
		{
			cout<<"Height=";
			cin>>height;
			cout<<"Width=";
			cin>>width;
		}
		set_tri()
		{
			cout<<"Per=";
			cin>>per;
			cout<<"Hyp=";
			cin>>hyp;
			while(hyp<per)
			{
				cout<<"hyp>per"<<endl;
				cout<<"Per=";
				cin>>per;
				cout<<"Hyp=";
				cin>>hyp;
			}
			cout<<"Base="<<sqrt(hyp*hyp-per*per)<<endl;
		}
		set_cir()
		{
			cout<<"Radius=";
			cin>>radius;
		}
		area_cir()
		{
			cout<<"Area="<<3.14*radius*radius<<endl;
		}
		area_tri()
		{
			cout<<"Area="<<0.5*per*sqrt(hyp*hyp-per*per)<<endl;
		}
		area_rec()
		{
			cout<<"Area="<<width*height<<endl;
		}
};
main()
{
	for(char c='y';c=='y';)
	{
		Shape s;
		cout<<"Circle"<<endl;
		s.set_cir();
		s.area_cir();
		cout<<"Rectangle"<<endl;
		s.set_rec();
		s.area_rec();
		cout<<"Triangle"<<endl;
		s.set_tri();
		s.area_tri();
		cout<<"continue(y/n)"<<endl;
		cin>>c;
	}
	
}

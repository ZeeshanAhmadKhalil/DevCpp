#include<iostream>
#include<string.h>
#include<windows.h>
#include<math.h>
using namespace std;
static int types_of_equations;
class Inputter
{
	protected:
	static float a,b,c,d,e;
	static float a1,b1,c1,d1;
	static float a2,b2,c2,d2;
	static float a3,b3,c3,d3;
	public:
		static float A;
		Inputter()
		{
			
		}
		set()
		{
			system("color c");
			cout<<"---------------------------------------------------------------------------"<<endl<<endl;
			cout<<"Equation Solver Program"<<endl<<endl;
			cout<<"---------------------------------------------------------------------------"<<endl<<endl;
			cout<<"The "<<types_of_equations<<" types of equations are:"<<endl;
			cout<<"1) ax+b=0"<<endl;
			cout<<"2) ax^2+bx+c=0"<<endl;
			cout<<"3) ax^3+bx+c=0"<<endl;
			cout<<"4) ax+by=c"<<endl;
			cout<<"5) ax+by+cz=d"<<endl;
			cout<<"Enter your choice:"<<endl;
			cin>>A;
			cout<<endl<<endl;
			while(A<1)
			{
				cout<<"---------------------------------------------------------------------------"<<endl<<endl;
				cout<<"Equation Solver Program"<<endl<<endl;
				cout<<"---------------------------------------------------------------------------"<<endl<<endl;
				system("cls");
				cout<<"The "<<types_of_equations<<" types of equations are:"<<endl;
				cout<<"1) ax+b=0"<<endl;
				cout<<"2) ax^2+bx+c=0"<<endl;
				cout<<"3) ax^3+bx+c=0"<<endl;
				cout<<"4) ax+by=c"<<endl;
				cout<<"5) ax+by+cz=d"<<endl;
				cout<<"Enter your choice:"<<endl;
				cin>>A;
				cout<<endl<<endl;
			}
			while(A>5)
			{
				system("cls");
				cout<<"---------------------------------------------------------------------------"<<endl<<endl;
				cout<<"Equation Solver Program"<<endl<<endl;
				cout<<"---------------------------------------------------------------------------"<<endl<<endl;
				cout<<"The "<<types_of_equations<<" types of equations are:"<<endl;
				cout<<"1) ax+b=0"<<endl;
				cout<<"2) ax^2+bx+c=0"<<endl;
				cout<<"3) ax^3+bx+c=0"<<endl;
				cout<<"4) ax+by=c"<<endl;
				cout<<"5) ax+by+cz=d"<<endl;
				cout<<"Enter your choice:"<<endl;
				cin>>A;
				cout<<endl<<endl;
			}
		}
		virtual show()
		{
			if(A==1)
			{
				cout<<"---------------------------------------------------------------------------"<<endl<<endl;
				cout<<"Your equ is"<<endl;
				cout<<"ax+b=0"<<endl;
				cout<<"a=";
				cin>>a;
				cout<<"b=";
				cin>>b;
			}
			else if(A==2)
			{
				cout<<"---------------------------------------------------------------------------"<<endl<<endl;
				cout<<"Your equ is"<<endl;
				cout<<"ax^2+bx+c=0"<<endl;
				cout<<"a=";
				cin>>a;
				cout<<"b=";
				cin>>b;
				cout<<"c=";
				cin>>c;
			}
			else if(A==3)
			{
				cout<<"---------------------------------------------------------------------------"<<endl<<endl;
				cout<<"Your equ is"<<endl;
				cout<<"ax^3+bx^2+cx+d=0"<<endl;
				cout<<"a=";
				cin>>a;
				cout<<"b=";
				cin>>b;
				cout<<"c=";
				cin>>c;
				cout<<"d=";
				cin>>d;
			}
			else if(A==4)
			{
				cout<<"---------------------------------------------------------------------------"<<endl<<endl;
				cout<<"Your equs are"<<endl;
				cout<<"a1x+b1y=c1"<<endl;
				cout<<"a2x+b2y=c2"<<endl;
				cout<<"a1=";
				cin>>a1;
				cout<<"b1=";
				cin>>b1;
				cout<<"c1=";
				cin>>c1;
				cout<<"a2=";
				cin>>a2;
				cout<<"b2=";
				cin>>b2;
				cout<<"c2=";
				cin>>c2;	
			}
			else if(A==5)
			{
				cout<<"---------------------------------------------------------------------------"<<endl<<endl;
				cout<<"ax1+b1y<<c1z=d1"<<endl;
				cout<<"ax2+b2y<<c2z=d2"<<endl;
				cout<<"ax3+b3y<<c3z=d3"<<endl;
				cout<<"a1=";
				cin>>a1;
				cout<<"b1=";
				cin>>b1;
				cout<<"c1=";
				cin>>c1;
				cout<<"d1=";
				cin>>d1;
				cout<<"a2=";
				cin>>a2;
				cout<<"b2=";
				cin>>b2;
				cout<<"c2=";
				cin>>c2;
				cout<<"d2=";
				cin>>d2;
				cout<<"a3=";
				cin>>a3;
				cout<<"b3=";
				cin>>b3;
				cout<<"c3=";
				cin>>c3;
				cout<<"d3=";
				cin>>d3;
			}
			else
			{
				system("cls");
				cout<<"Wrong input"<<endl;
			}
		}
		virtual compute()
		{
			cout<<"Specific computation are in child classes"<<endl;
		}
		~Inputter()
		{
			A=0;
			a=0;
			b=0;
			c=0;
			d=0;
			a1=0;
			b1=0;
			c1=0;
			d1=0;
			a2=0;
			b2=0;
			c2=0;
			d2=0;
			a3=0;
			b3=0;
			c3=0;
			d3=0;
		}
		Inputter(Inputter&f)
		{
			A=f.A;
			a=f.a;
			b=f.b;
			c=f.c;
			d=f.d;
			a1=f.a1;
			b1=f.b1;
			c1=f.c1;
			d1=f.d1;
			a2=f.a2;
			b2=f.b2;
			c2=f.c2;
			d2=f.d2;
			a3=f.a3;
			b3=f.b3;
			c3=f.c3;
			d3=f.d3;
		}
};
float Inputter::A;
float Inputter::a;
float Inputter::b;
float Inputter::c;
float Inputter::d;
float Inputter::e;
float Inputter::a1;
float Inputter::b1;
float Inputter::c1;
float Inputter::d1;
float Inputter::a2;
float Inputter::b2;
float Inputter::c2;
float Inputter::d2;
float Inputter::a3;
float Inputter::b3;
float Inputter::c3;
float Inputter::d3;
class Linear:public Inputter
{
	public:
		Linear()
		{
			types_of_equations++;
		}
		compute()
		{
			cout<<endl<<"---------------------------------------------------------------------------"<<endl<<endl;
			if(a==0)
			cout<<"Undefined answer"<<endl;
			else
			cout<<"X="<<-b/a<<endl;
		}
};
class Quadratic:public Inputter
{
	public:
		Quadratic()
		{
			types_of_equations++;
		}
		compute()
		{
			cout<<endl<<"---------------------------------------------------------------------------"<<endl<<endl;
			if(a==0)
			{
				cout<<"Undefined roots"<<endl;
			}
			else
			{
				if((b*b-4*a*c)<0)
				{
					cout<<"X1="<<-b/(2*a)<<"+"<<sqrt(-(b*b-4*a*c))/(2*a)<<"i"<<endl;
					cout<<"X2="<<-b/(2*a)<<"-"<<sqrt(-(b*b-4*a*c))/(2*a)<<"i"<<endl;
				}
				else
				{
					cout<<"X1="<<(-b+sqrt(b*b-4*a*c))/(2*a)<<endl;
					cout<<"X2="<<(-b-sqrt(b*b-4*a*c))/(2*a)<<endl;
				}
			}
		}
};
class Cubic:public Inputter
{
	private:
		double f,g,h;
    	double i,j,k,l,m,n,p,po;
    	double r,s,t,u;
    	float x1,x2,x2re,x2im,x3re,x3im,x3;
		public:
		Cubic()
		{
			types_of_equations++;
		}
		compute()
		{
			cout<<endl<<"---------------------------------------------------------------------------"<<endl<<endl;
			f = ((3*c/a)-((b*b)/(a*a)))/3;
       		g = ((2*(b*b*b)/(a*a*a))-(9*b*c/(a*a))+(27*d/a))/27;   
       		h = ((g*g)/4)+((f*f*f)/27);
       		if(a==0)
       		{
       			cout<<"Undefined roots"<<endl;
			}
			else
			{
				if(f==0&&h==0&&g==0)
				{
					if(d/a<0)
					{
						x1=pow(-(d/a),0.33333333333333333333333333333333)*-1;
     	 	 			x2=pow(-(d/a),0.33333333333333333333333333333333)*-1;
       					x3=pow(-(d/a),0.33333333333333333333333333333333)*-1;
					}
					else
					{
						x1=pow((d/a),0.33333333333333333333333333333333);
     	 	 			x2=pow((d/a),0.33333333333333333333333333333333);
       					x3=pow((d/a),0.33333333333333333333333333333333);
					}
				}
				else if(h<=0)
				{
					i=pow((((g*g)/4)-h),0.5);
					if(i<0)
					{
						j=pow(-i,0.33333333333333333333333333333333)*-1;
					}
					else
					{
						j=pow(i,0.33333333333333333333333333333333);
					}
       				k=acos((g/(2*i))*-1);
       				l=j*-1;
       				m=cos(k/3);
       				n=sqrt(3)*sin(k/3);
       				p=(b/(3*a))*-1;
       				x1=(2*j)*m-(b/(3*a));
       				x2=l*(m+n)+p;
       				x3=l*(m-n)+p;
				}
				else
				{
					r = ((g/2)*-1)+pow(h,0.5);
       				if(r<0)
      			 	{
       					s = pow(-r,0.33333333333333333333333333333333)*-1;
	   				}
	   				else
	   				{
	   					s = pow(r,0.33333333333333333333333333333333);
	   				}
       				t = ((g/2)*-1)-pow(h,0.5);
       				if(t<0)
       				{
       					u = pow((-t),0.33333333333333333333333333333333)*-1;
	   				}
	   				else
	   				{
	   					u = pow((t),0.33333333333333333333333333333333);
	   				}
       				x1 = (s+u) - (b/(3*a));
       				x2re = (((s+u)*-1)/2) - (b/(3*a));
       				x2im = -(s-u)*pow(3,0.5)/2;
       				x3re = (((s+u)*-1)/2) - (b/(3*a));
       				x3im = (s-u)*pow(3,0.5)/2;
				}
			}
		}
		show()
		{
			if(f==0&&g==0&&h==0)
			{
				cout<<"X1="<<x1<<endl;
       			cout<<"X2="<<x2<<endl;
       			cout<<"X3="<<x3<<endl;
			}
			else if(h<=0)
			{
				cout<<"X1="<<x1<<endl;
       			cout<<"X2="<<x2<<endl;	
       			cout<<"X3="<<x3<<endl;
			}
			else if(h>0)
			{
				cout << "X1="<<x1<<endl;
       			if(x2im>0)
       			{
       				cout << "X2="<<x2re<<"+"<<x2im<<"i"<<endl;
	   			}
       			else
       			{
       				cout << "X2="<<x2re<<x2im<<"i"<<endl;
	   			}
       			if(x3im>0)
       			{
       				cout<<"X3="<<x3re<<"+"<<x3im<<"i"<<endl;
	   			}
	   			else
	   			{
	   				cout<<"X3="<<x3re<<x3im<<"i"<<endl;
	   			}
			}
		}
};
class Two_variable:public Inputter
{
	public:
		Two_variable()
		{
			types_of_equations++;
		}
		compute()
		{
			cout<<endl<<"---------------------------------------------------------------------------"<<endl<<endl;
			if((a1*b2-a2*b1)==0)
			{
				cout<<"Indefined Values"<<endl;
			}
			else
			{
				cout<<"X="<<(c1*b2-b1*c2)/(a1*b2-a2*b1)<<endl;
				cout<<"Y="<<(a1*c2-c1*a2)/(a1*b2-a2*b1)<<endl;
			}
		}
};
class Three_variable:public Inputter
{
	public:
		Three_variable()
		{
			types_of_equations++;
		}
		compute()
		{
			cout<<endl<<"---------------------------------------------------------------------------"<<endl<<endl;			
			if(a1*(b2*c3-b3*c2)-b1*(a2*c3-a3*c2)+c1*(a2*b3-a3*b2)==0)
			cout<<"Indefined values"<<endl;
			else
			{
				cout<<"X="<<(d1*(b2*c3-b3*c2)-b1*(d2*c3-d3*c2)+c1*(d2*b3-d3*b2))/(a1*(b2*c3-b3*c2)-b1*(a2*c3-a3*c2)+c1*(a2*b3-a3*b2))<<endl;
				cout<<"Y="<<(a1*(d2*c3-d3*c2)-d1*(a2*c3-a3*c2)+c1*(a2*d3-a3*d2))/(a1*(b2*c3-b3*c2)-b1*(a2*c3-a3*c2)+c1*(a2*b3-a3*b2))<<endl;
				cout<<"Z="<<(a1*(b2*d3-b3*d2)-b1*(a2*d3-a3*d2)+d1*(a2*b3-a3*b2))/(a1*(b2*c3-b3*c2)-b1*(a2*c3-a3*c2)+c1*(a2*b3-a3*b2))<<endl;
			}
		}
};
int main()
{
	string c;
	Inputter*i;
	Linear l;
	Quadratic q;
	Cubic cu;
	Two_variable t;
	Three_variable th;
	label:
	system("cls");
	i->set();
	Inputter*j=new Inputter(*i);
	j->show();
	if(Inputter::A==1)
	{
		j=&l;
		j->compute();		
	}
	else if(Inputter::A==2)
	{
		j=&q;
		j->compute();
	}
	else if(Inputter::A==3)
	{
		j=&cu;
		j->compute();
		j->show();
	}
	else if(Inputter::A==4)
	{
		j=&t;
		j->compute();
	}
	else if(Inputter::A==5)
	{
		j=&th;
		j->compute();
	}
	cout<<endl<<"---------------------------------------------------------------------------"<<endl<<endl;
	cout<<"continue(y/n)"<<endl;
	cin>>c;
	if(c=="yes"||c=="YES"||c=="Y"||c=="y")
	goto label;
	else
	cout<<"Thank You"<<endl;
	return 0;
}

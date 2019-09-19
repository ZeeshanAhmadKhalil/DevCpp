#include<iostream>
#include<string.h>
using namespace std;
class One
{
	protected:
		string A[3][2];
	public:
		set_negation()
		{
			A[0][0]="P";
			A[0][1]="-p";
			cout<<"P:";
			for(int a=1;a<3;a++)
			{
				cin>>A[a][0];
			}
			if(A[1][0]=="T")
			A[1][1]="F";
			else 
			A[1][1]="T";
			if(A[2][0]=="T")
			A[2][1]="F";
			else 
			A[2][1]="T";
			cout<<"Truth Table:"<<endl;
			for(int a=0;a<3;a++)
			{
				for(int b=0;b<2;b++)
				{
					cout<<A[a][b]<<"   ";
				}
				cout<<endl;
			}
		}
};
main()
{
	One n;
	n.set_negation();
}

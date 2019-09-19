#include<iostream>
using namespace std;
int main()
{
//	bool refund=0;
//	string married_status="divorced";
//	int income=70000;
//	char s;
//	bool cheat=0;
//	cout<<"Is refunded(y/n)"<<endl;
//	cin>>s;
//	if(s=='y')
//	refund=1;
//	else
//	refund=0;
//	cout<<"Married status"<<endl;
//	cin>>married_status;
//	cout<<"Income Texable"<<endl;
//	cin>>income;
int data[10][4]={{1,2,125000,0},
				 {0,3,100000,0},
				 {0,2,70000 ,0},
				 {1,3,120000,0},
				 {0,1,95000 ,0},
				 {0,3,60000 ,0},
				 {1,1,220000,0},
				 {0,2,85000 ,0},
				 {0,3,75000 ,0},
				 {0,2,90000 ,0}};
	for(int i=0;i<10;i++)
	{
		if(data[i][0]==0&&data[i][1]!=3)
		{
			if((data[i][2]>70000&&data[i][1]==2)||data[i][1]==1)
			{
				data[i][3]=1;
			}
		}
        if(data[i][0]==0)
	    cout<<"No   ";
		else	
		cout<<"Yes   ";
		if(data[i][1==3])
		cout<<"Married   ";
		else if(data[i][0]==2)
		cout<<"Single   ";
		else
		cout<<"Divorced   ";
		cout<<data[i][2]<<"   ";
		if(data[i][3]==0)
	    cout<<"No   ";
		else	
		cout<<"Yes   ";
		cout<<endl;
	}
}

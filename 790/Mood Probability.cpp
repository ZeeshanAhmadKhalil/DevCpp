#include<iostream>
using namespace std;
int main()
{
	float mood[3][3]={{0.2,0.5,0.3},{0,0.8,0.2},{0.2,0.6,0.2}};
	float type[3][3]={{0.7,0.2,0.1},{0,0.1,0.9},{0.3,0.4,0.3}};
	float pred[3][5];
	float previous[3]={1,0,0};
	int Tc;
	float max;
	int max_index;
	string pred_seq[5];
	string seq="ACBAC";
	for(int i=0;i<5;i++)
	{
		if(seq[i]=='A')
		Tc=0;
		else if(seq[i]=='B')
		Tc=1;
		else
		Tc=2;
		max=0;
		max_index=0;
		for(int j=0;j<3;j++)
		{
			pred[j][i]=0;
			for(int k=0;k<3;k++)
			{
				pred[j][i]=pred[j][i]+previous[k]*mood[k][j]*type[j][Tc];
//				cout<<pred[j][i]<<endl;
//				cout<<previous[k]<<"*"<<mood[k][j]<<"*"<<type[j][Tc]<<"="<<previous[k]*mood[k][j]*type[j][Tc]<<endl;
			}
			if(max<pred[j][i])
			{
				max=pred[j][i];
				max_index=j;
			}
//			cout<<"X"<<j+1<<i+1<<"="<<pred[j][i]<<endl;
//			cout<<endl;
		}
//		cout<<endl;
//		if(i==0)
//		{
//			cout<<"0.14="<<pred[0][0]<<endl;
//			cout<<"0="<<pred[0][0]<<endl;
//		}
//		cout<<"Max="<<max<<endl;
//		cout<<"Max Index="<<max_index<<endl;
		if(max_index==0)
		pred_seq[i]="good";
		else if(max_index==1)
		pred_seq[i]="bad";
		else
		pred_seq[i]="neutral";
//		cout<<"At "<<i<<"="<<pred_seq[i]<<endl;
//		pred_seq[i]="neutral";
		previous[0]=pred[0][i];
		previous[1]=pred[1][i];
		previous[2]=pred[2][i];
	}
	cout<<"Hence the probability of this sequence is:"<<max<<endl<<endl;
	cout<<"The following sequence has the highest probability for teacher’s mood:"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<pred_seq[i];
		if(i!=4)
		cout<<" - ";
	}
}

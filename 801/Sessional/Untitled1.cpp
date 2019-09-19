#include<iostream>
using namespace std;
main()
{
	int chr_size;
	bool choice=0;
	cout<<"Enter the size of chromosomes"<<endl;
	cin>>chr_size;
	int chr1[chr_size];
	int chr2[chr_size];
	cout<<"Enter the values of chromosome 1"<<endl;
	for(int i=0;i<chr_size;i++)
	{
		cin>>chr1[i];
	}
	cout<<"Enter the values of chromosome 2"<<endl;
	for(int i=0;i<chr_size;i++)
	{
		cin>>chr2[i];
	}
	cout<<"Enter your choice"<<endl;
	cout<<"0 Cross Over"<<endl;
	cout<<"1 Mutation"<<endl;
	cin>>choice;
	if(choice==0)
	{
		int temp1[chr_size/2];
		int temp2[chr_size/2];
		for(int i=0;i<chr_size/2;i++)
		{
			temp1[i]=chr1[i+chr_size/2+chr_size%2];
			temp2[i]=chr2[i+chr_size/2+chr_size%2];
//			cout<<chr1[i+3]<<endl;
		}
		for(int i=chr_size/2+chr_size%2;i<chr_size;i++)
		{
			chr1[i]=temp2[i-chr_size/2-chr_size%2];
			chr2[i]=temp1[i-chr_size/2-chr_size%2];
		}
		for(int i=0;i<chr_size;i++)
		{
			cout<<chr1[i]<<" ";
		}
		cout<<endl;
		for(int i=0;i<chr_size;i++)
		{
			cout<<chr2[i]<<" ";
		}
		cout<<endl;
	}
	else
	{
		int chr_no;
		cout<<"To which chromosome you want to apply mutation"<<endl;
		cout<<"1 Chromosome 1"<<endl;
		cout<<"2 Chromosome 2"<<endl;
		cin>>chr_no;
		cout<<"Which index you want to change"<<endl;
		int chr_index;
		cin>>chr_index;
		cout<<"Enter your choice"<<endl;
		cout<<"0 Give value"<<endl;
		cout<<"1 Give base"<<endl;
		cin>>choice;
		if(choice==0)
		{
			cout<<"Enter value to overrite"<<endl;
			int chr_value;
			cin>>chr_value;
			if(chr_no==1)
			{
				chr1[chr_index]=chr_value;
				for(int i=0;i<chr_size;i++)
				{
					cout<<chr1[i]<<" ";
				}
			}
			else
			{
				chr2[chr_index]=chr_value;
				for(int i=0;i<chr_size;i++)
				{
					cout<<chr2[i]<<" ";
				}
			}
		}
		else
		{
			int chr_base;
			cout<<"Enter base of chromosome"<<endl;
			cin>>chr_base;
			if(chr_base==2)
			{
				if(chr_no==1)
				{	
					if(chr1[chr_index]==1)
					{
						chr1[chr_index]=0;
					}
					else
					{
						chr1[chr_index]=1;
					}
					for(int i=0;i<chr_size;i++)
					{
						cout<<chr1[i]<<" ";
					}
				}
				else
				{
					if(chr2[chr_index]==1)
					{
						chr2[chr_index]=0;
					}
					else
					{
						chr2[chr_index]=1;
					}
					for(int i=0;i<chr_size;i++)
					{
						cout<<chr2[i]<<" ";
					}
				}
			}
			else
			{
				if(chr_no==1)
				{
					chr1[chr_index]=chr_base-chr1[chr_index];
					for(int i=0;i<chr_size;i++)
					{
						cout<<chr2[i]<<" ";
					}
				}
				else
				{
					chr2[chr_index]=chr_base-chr2[chr_index];
					for(int i=0;i<chr_size;i++)
					{
						cout<<chr2[i]<<" ";
					}
				}
			}
		}
	}
}

#include<iostream>
using namespace std;
bool chk_mch(char a,string b);
main()
{
	cout<<"Enter a string"<<endl;
	string str;
	int len_i=0;
	getline(cin,str);
	while(str[len_i]!='\0')
	len_i++;
	int words=1;
	char rep_str;
	int rep_len;
	string repeated_str;
//	int i=0;
//	while(str[i]!=0)
//	{
//		cout<<str[i]<<endl;
//		i++;
//	}
	for(int i=0;i<len_i;i++)
	{
		if(str[i]==' ')
		words++;
	}
	cout<<"Number of Words="<<words<<endl;
	cout<<"Length of string is="<<len_i-(words-1)<<endl;
	for(int i=0;i<len_i;i++)
	{
		rep_str='!';
		rep_len=1;
		for(int j=i+1;j<len_i;j++)
		{
			if(str[i]==str[j] && !chk_mch(str[i],repeated_str) && str[i]!=' ')
			{
				rep_str=str[i];
				rep_len++;
			}
		}
		repeated_str=repeated_str+str[i];
		if(rep_str!='!')
		cout<<rep_str<<":"<<rep_len<<endl;
	}	
//		cout<<repeated_str<<endl;
}
bool chk_mch(char a,string b)
{
	for(int i=0;i<b.length();i++)
	{
		if(b[i]==a)
		return true;	
	}
	return false;
}

#include<iostream>        //for input & output
#include<windows.h>		 //for gotoxy
#include<string.h>		//for string
#include<conio.h>	   //for getch()
#include<cstdlib>     //for system("CLS")
using namespace std;
class Goto
{
	protected:
		string A[15][15];
	public:
		goto_input1()
		{
			cout<<endl<<A[0][0]<<endl<<endl;
			for(int a=1;a<3;a++)
			{
				
				cin>>A[a][0];
				cout<<endl;
			}
		}
		goto_input2()
		{
			cout<<endl<<A[0][0]<<"  "<<A[0][1]<<endl<<endl;
			for(int r=1;r<5;r++)
			{
				cin>>A[r][0];
				cout<<endl;
			}
			gotoxy(3,20);
			cin>>A[1][1];
			gotoxy(3,22);
			cin>>A[2][1];
			gotoxy(3,24);
			cin>>A[3][1];
			gotoxy(3,26);
			cin>>A[4][1];
				
		}
		goto_input3()
		{
			cout<<endl<<A[0][0]<<"  "<<A[0][1]<<"  "<<A[0][2]<<endl<<endl;
			for(int r=1;r<9;r++)
			{
				cin>>A[r][0];
				cout<<endl;
			}
			gotoxy(3,15);
			cin>>A[1][1];
			gotoxy(3,17);
			cin>>A[2][1];
			gotoxy(3,19);
			cin>>A[3][1];
			gotoxy(3,21);
			cin>>A[4][1];
			gotoxy(3,23);
			cin>>A[5][1];
			gotoxy(3,25);
			cin>>A[6][1];
			gotoxy(3,27);
			cin>>A[7][1];
			gotoxy(3,29);
			cin>>A[8][1];
			gotoxy(6,15);
			cin>>A[1][2];
			gotoxy(6,17);
			cin>>A[2][2];
			gotoxy(6,19);
			cin>>A[3][2];
			gotoxy(6,21);
			cin>>A[4][2];
			gotoxy(6,23);
			cin>>A[5][2];
			gotoxy(6,25);
			cin>>A[6][2];
			gotoxy(6,27);
			cin>>A[7][2];
			gotoxy(6,29);
			cin>>A[8][2];
		}
		goto_pANDp_pORp(int table_length)
		{
			for(int a=1;a<=table_length;a++)
			{
				
				if(A[a][0]=="T"||A[a][0]=="F"||A[a][0]=="t"||A[a][0]=="f"||A[a][0]=="1"||A[a][0]=="0")
		    	{
			   		A[a][1]=A[a][0];
			   		A[a][2]=A[a][0];
		    	}
		    	else
		    	{
			  		A[a][1]="E";
			   		A[a][2]="E";
		    	}
			}
		}
		goto_negation(int table_length,int input_column,int output_column)
		{
			for(int a=1;a<=table_length;a++)
			{
		   		if(A[a][input_column]=="T")
		   		A[a][output_column]="F";
		   		else if(A[a][input_column]=="F")
		   		A[a][output_column]="T";
		   		else if(A[a][input_column]=="t")
		   		A[a][output_column]="f";
		   		else if(A[a][input_column]=="f")
		   		A[a][output_column]="t";
		   		else if(A[a][input_column]=="1")
		   		A[a][output_column]="0";
		   		else if(A[a][input_column]=="0")
		   		A[a][output_column]="1";
		   		else
		   		A[a][output_column]="E";
			}
		}
		goto_AND(int table_length,int input_column1,int input_column2,int output_column)
		{
			for(int a=1;a<=table_length;a++)
			{
		   		if(A[a][input_column1]=="T"&&A[a][input_column2]=="T")
		   		A[a][output_column]="T";
		   		else if(A[a][input_column1]=="t"&&A[a][input_column2]=="t")
		   		A[a][output_column]="t";
		   		else if(A[a][input_column1]=="1"&&A[a][input_column2]=="1")
		   		A[a][output_column]="1";
		   		else if((A[a][input_column1]=="T"&&A[a][input_column2]=="F")||(A[a][input_column1]=="F"&&A[a][input_column2]=="T")||(A[a][input_column1]=="F"&&A[a][input_column2]=="F"))
		   		A[a][output_column]="F";
		   		else if((A[a][input_column1]=="t"&&A[a][input_column2]=="f")||(A[a][input_column1]=="f"&&A[a][input_column2]=="t")||(A[a][input_column1]=="f"&&A[a][input_column2]=="f"))
		   		A[a][output_column]="f";
		   		else if((A[a][input_column1]=="1"&&A[a][input_column2]=="0")||(A[a][input_column1]=="0"&&A[a][input_column2]=="1")||(A[a][input_column1]=="0"&&A[a][input_column2]=="0"))
		   		A[a][output_column]="0";
		   		else
		   		A[a][output_column]="E";
			}
		}
		goto_OR(int table_length,int input_column1,int input_column2,int output_column)
		{
			for(int a=1;a<=table_length;a++)
			{		
		   		if(A[a][input_column1]=="f"&&A[a][input_column2]=="f")
		   		A[a][output_column]="f";
		   		else if(A[a][input_column1]=="F"&&A[a][input_column2]=="F")
		   		A[a][output_column]="F";
		   		else if(A[a][input_column1]=="0"&&A[a][input_column2]=="0")
		   		A[a][output_column]="0";
		   		else if((A[a][input_column1]=="F"&&A[a][input_column2]=="T")||(A[a][input_column1]=="T"&&A[a][input_column2]=="F")||(A[a][input_column1]=="T"&&A[a][input_column2]=="T"))
		   		A[a][output_column]="T";
		   		else if((A[a][input_column1]=="t"&&A[a][input_column2]=="f")||(A[a][input_column1]=="f"&&A[a][input_column2]=="t")||(A[a][input_column1]=="t"&&A[a][input_column2]=="t"))
		   		A[a][output_column]="t";
		   		else if((A[a][input_column1]=="1"&&A[a][input_column2]=="0")||(A[a][input_column1]=="0"&&A[a][input_column2]=="1")||(A[a][input_column1]=="1"&&A[a][input_column2]=="1"))
		   		A[a][output_column]="1";
		   		else
		   		A[a][output_column]="E";
			}
		}
		goto_imply(int table_length,int input_column1,int input_column2,int output_column)
		{
			for(int a=1;a<=table_length;a++)
			{
				if(A[a][input_column1]=="T"&&A[a][input_column2]=="F")
				A[a][output_column]="F";
				else if((A[a][input_column1]=="F"&&A[a][input_column2]=="T")||(A[a][input_column1]=="F"&&A[a][input_column2]=="F")||(A[a][input_column1]=="T"&&A[a][input_column2]=="T"))
				A[a][output_column]="T";
				else if(A[a][input_column1]=="t"&&A[a][input_column2]=="f")
				A[a][output_column]="f";
				else if((A[a][input_column1]=="f"&&A[a][input_column2]=="t")||(A[a][input_column1]=="f"&&A[a][input_column2]=="f")||(A[a][input_column1]=="t"&&A[a][input_column2]=="t"))
				A[a][output_column]="t";
				else if(A[a][input_column1]=="1"&&A[a][input_column2]=="0")
				A[a][output_column]="0";
				else if((A[a][input_column1]=="0"&&A[a][input_column2]=="1")||(A[a][input_column1]=="0"&&A[a][input_column2]=="0")||(A[a][input_column1]=="1"&&A[a][input_column2]=="1"))
				A[a][output_column]="1";
				else
				A[a][output_column]="E";
			}
		}
		goto_iff(int table_length,int input_column1,int input_column2,int output_column)
		{
			for(int a=1;a<=table_length;a++)
			{
				if((A[a][input_column1]=="T"&&A[a][input_column2]=="T")||(A[a][input_column1]=="F"&&A[a][input_column2]=="F"))
				A[a][output_column]="T";
				else if((A[a][input_column1]=="F"&&A[a][input_column2]=="T")||(A[a][input_column1]=="T"&&A[a][input_column2]=="F"))
				A[a][output_column]="F";
				else if((A[a][input_column1]=="t"&&A[a][input_column2]=="t")||(A[a][input_column1]=="f"&&A[a][input_column2]=="f"))
				A[a][output_column]="t";
				else if((A[a][input_column1]=="f"&&A[a][input_column2]=="t")||(A[a][input_column1]=="t"&&A[a][input_column2]=="f"))
				A[a][output_column]="f";
				else if((A[a][input_column1]=="1"&&A[a][input_column2]=="1")||(A[a][input_column1]=="0"&&A[a][input_column2]=="0"))
				A[a][output_column]="1";
				else if((A[a][input_column1]=="0"&&A[a][input_column2]=="1")||(A[a][input_column1]=="1"&&A[a][input_column2]=="0"))
				A[a][output_column]="0";
				else
				A[a][output_column]="E";
			}
			
		}	
		gotoxy(int x,int y)
		{
			COORD c;
			c.X=x;
			c.Y=y;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
		}
};
class Laws:public Goto
{
	public:
	idempotent_law()
	{
		cout<<endl<<"Enter truth values But if you entered wrong truth  value  output will be E wich means error"<<endl;
		cout<<endl<<"IDEMPOTENT LAW:"<<endl;
		A[0][0]="p";
		A[0][1]="pANDp";
		A[0][2]="pORp";
		goto_input1();
		goto_pANDp_pORp(2);
			gotoxy(3,18);
			for(int c=1;c<3;c++)
			{
				cout<<A[0][c]<<"  ";
			}
			gotoxy(5,20);
			for(int c=1;c<3;c++)
			{
				cout<<A[1][c]<<"      ";
			}
			gotoxy(5,22);
			for(int c=1;c<3;c++)
			{
				cout<<A[2][c]<<"      ";
			}
	}
	demorgan_law1()
	{
		cout<<endl<<"Enter truth values But if you entered wrong truth  value  output will be E wich means error"<<endl;
		cout<<endl<<"DEMORGAN'S LAW 1:"<<endl;
		A[0][0]="p";
		A[0][1]="q";
		A[0][2]="-p";
		A[0][3]="-q";
		A[0][4]="-pAND-q";
		A[0][5]="pORq";
		A[0][6]="-(pORq)";
		goto_input2();
		goto_negation(4,0,2);
		goto_negation(4,1,3);
		goto_AND(4,2,3,4);
		goto_OR(4,0,1,5);
		goto_negation(4,5,6);
		gotoxy(6,18);
		for(int c=2;c<7;c++)
		{
			cout<<A[0][c]<<"  ";
		}
		gotoxy(7,20);
		static int a=0;
		a=a-a;
		for(int r=1;r<5;r++)
		{
			cout<<A[r][2];
			gotoxy(7,22+a);
			a=a+2;
		}
		gotoxy(11,20);
		a=a-a;
		for(int r=1;r<5;r++)
		{
			cout<<A[r][3];
			gotoxy(11,22+a);
			a=a+2;
		}
		gotoxy(17,20);
		a=a-a;
		for(int r=1;r<5;r++)
		{
			cout<<A[r][4];
			gotoxy(17,22+a);
			a=a+2;
		}
		gotoxy(24,20);
		a=a-a;
		for(int r=1;r<5;r++)
		{
			cout<<A[r][5];
			gotoxy(24,22+a);
			a=a+2;
		}
		gotoxy(32,20);
		a=a-a;
		for(int r=1;r<5;r++)
		{
			cout<<A[r][6];
			gotoxy(32,22+a);
			a=a+2;
		}
	}	
	demorgan_law2()
	{
		cout<<endl<<"Enter truth values But if you entered wrong truth  value  output will be E wich means error"<<endl;
		cout<<endl<<"DEMORGAN'S LAW 2:"<<endl;
		A[0][0]="p";
		A[0][1]="q";
		A[0][2]="-p";
		A[0][3]="-q";
		A[0][4]="-pOR-q";
		A[0][5]="pANDq";
		A[0][6]="-(pANDq)";
		goto_input2();
		goto_negation(4,0,2);
		goto_negation(4,1,3);
		goto_OR(4,2,3,4);
		goto_AND(4,0,1,5);
		goto_negation(4,5,6);  
		gotoxy(6,18);
		for(int c=2;c<7;c++)
		{
			cout<<A[0][c]<<"  ";
		}
		gotoxy(7,20);
		static int a=0;
		a=a-a;
		for(int r=1;r<5;r++)
		{
			cout<<A[r][2];
			gotoxy(7,22+a);
			a=a+2;
		}
		gotoxy(11,20);
		a=a-a;
		for(int r=1;r<5;r++)
		{
			cout<<A[r][3];
			gotoxy(11,22+a);
			a=a+2;
		}
		gotoxy(17,20);
		a=a-a;
		for(int r=1;r<5;r++)
		{
			cout<<A[r][4];
			gotoxy(17,22+a);
			a=a+2;
		}
		gotoxy(24,20);
		a=a-a;
		for(int r=1;r<5;r++)
		{
			cout<<A[r][5];
			gotoxy(24,22+a);
			a=a+2;
		}
		gotoxy(32,20);
		a=a-a;
		for(int r=1;r<5;r++)
		{
			cout<<A[r][6];
			gotoxy(32,22+a);
			a=a+2;
		}
	}
	commutative_law()
	{
		cout<<endl<<"Enter truth values But if you entered wrong truth  value  output will be E wich means error"<<endl;
		A[0][0]="p";
		A[0][1]="q";
		A[0][2]="pIFFq";
		A[0][3]="qIFFp";
		cout<<endl<<"COMMUTATIVE LAW:"<<endl;
		goto_input2();
		goto_iff(4,0,1,2);
		goto_iff(4,1,0,3);
		gotoxy(6,18);
		for(int c=2;c<4;c++)
		{
			cout<<A[0][c]<<"  ";
		}
		static int a=0;
		a=a-a;
		gotoxy(8,20);
		for(int r=1;r<5;r++)
		{
			cout<<A[r][2];
			gotoxy(8,22+a);
			a=a+2;
		}
		gotoxy(15,20);
		a=a-a;
		for(int r=1;r<5;r++)
		{
			cout<<A[r][3];
			gotoxy(15,22+a);
			a=a+2;
		}	
		
	}
	implicative_law()
	{
		cout<<endl<<"Enter truth values But if you entered wrong truth  value  output will be E wich means error"<<endl;
		A[0][0]="p";
		A[0][1]="q";
		A[0][2]="-p";
		A[0][3]="-q";
		A[0][4]="-pORq";
		A[0][5]="pAND-q";
		A[0][6]="-(pAND-q)";
		A[0][7]="pIMPLIESq";
		cout<<endl<<"IMPLICATIVE LAW:"<<endl;
		goto_input2();
		goto_negation(4,0,2);
		goto_negation(4,1,3);
		goto_OR(4,2,1,4);
		goto_AND(4,0,3,5);
		goto_negation(4,5,6);
		goto_imply(4,0,1,7);
		gotoxy(6,18);
		for(int c=2;c<8;c++)
		{
			cout<<A[0][c]<<"   ";
		}
		gotoxy(7,20);
		static int a=0;
		a=a-a;
		for(int r=1;r<5;r++)
		{
			cout<<A[r][2];
			gotoxy(7,22+a);
			a=a+2;
		}
		gotoxy(12,20);
		a=a-a;
		for(int r=1;r<5;r++)
		{
			cout<<A[r][3];
			gotoxy(12,22+a);
			a=a+2;
		}
		gotoxy(19,20);
		a=a-a;
		for(int r=1;r<5;r++)
		{
			cout<<A[r][4];
			gotoxy(19,22+a);
			a=a+2;
		}
		gotoxy(26,20);
		a=a-a;
		for(int r=1;r<5;r++)
		{
			cout<<A[r][5];
			gotoxy(26,22+a);
			a=a+2;
		}
		gotoxy(37,20);
		a=a-a;
		for(int r=1;r<5;r++)
		{
			cout<<A[r][6];
			gotoxy(37,22+a);
			a=a+2;
		}
		gotoxy(48,20);
		a=a-a;
		for(int r=1;r<5;r++)
		{
			cout<<A[r][7];
			gotoxy(48,22+a);
			a=a+2;
		}
	}
	exportation_law()
	{
		A[0][0]="p";
		A[0][1]="q";
		A[0][2]="r";
		A[0][3]="pANDq";
		A[0][4]="(pANDq)IMPLIESr";
		A[0][5]="qIMPLIESr";
		A[0][6]="pIMPLIES(qIMPLIESr)";
		goto_input3();
		goto_AND(8,0,1,3);
		goto_imply(8,3,2,4);
		goto_imply(8,1,2,5);
		goto_imply(8,0,5,6);
		gotoxy(9,13);
		for(int c=3;c<7;c++)
		{
			cout<<A[0][c]<<"   ";
		}
		gotoxy(11,15);
		static int a=0;
		a=a-a;
		for(int r=1;r<9;r++)
		{
			cout<<A[r][3];
			gotoxy(11,17+a);
			a=a+2;
		}
		gotoxy(25,15);
		a=a-a;
		for(int r=1;r<9;r++)
		{
		
			cout<<A[r][4];
			gotoxy(25,17+a);
			a=a+2;
		}
		gotoxy(39,15);
		a=a-a;
		for(int r=1;r<9;r++)
		{
		
			cout<<A[r][5];
			gotoxy(39,17+a);
			a=a+2;
		}
		gotoxy(56,15);
		a=a-a;
		for(int r=1;r<9;r++)
		{
		
			cout<<A[r][6];
			gotoxy(56,17+a);
			a=a+2;
		}
		
		
	}
};
main()
{
	Laws l;
	string choice;
	for(string go_back="yes";go_back=="yes";)
	{
		system("CLS");
		cout<<"This system displays following Laws:"<<endl;
		cout<<"1)Idempotent Law"<<endl;
		cout<<"2)Demorgan's Law 1"<<endl;
		cout<<"3)Demorgan's Law 2"<<endl;
		cout<<"4)Commutative Law"<<endl;
		cout<<"5)Implicative Law"<<endl;
		cout<<"6)Exportation Law"<<endl;
		cout<<"7)Equivalence Law"<<endl;
		cout<<"8)Reductio ad obserdum"<<endl;
		cout<<endl<<"Enter your choice e.g 1,2,3....."<<endl;
		cout<<"Choice=";
		cin>>choice;
		if(choice=="1")
		{
			l.idempotent_law();
		}
		else if(choice=="2")
		{
			l.demorgan_law1();
		}
		else if(choice=="3")
		{
			l.demorgan_law2();
		}
		else if(choice=="4")
		{
			l.commutative_law();
		}
		else if(choice=="5")
		{
			l.implicative_law();
		}
		else if(choice=="6")
		{
			l.exportation_law();
		}
		else
		{
			cout<<"You entered wrong choice."<<endl;
		}
		cout<<endl<<endl<<"Do you want to go back...yes or no:"<<endl<<endl;
		cin>>go_back;
	}
	getch();
}

#include"List.cpp"
using namespace std;
main()
{
	List l;
	int choice;
	loop:
	cout<<"Enter your choice"<<endl;
	cout<<"1)create List"<<endl;
	cout<<"2)Add a value at current Node"<<endl;
	cout<<"3)Remove a value from current node"<<endl;
	cout<<"4)Move current to Start"<<endl;
	cout<<"5)Move current to next"<<endl;
	cout<<"6)To exit The program"<<endl;
	again:
	cin>>choice;
	if(choice==1)
	{
		cout<<endl;
		l.create();
		cout<<endl;
	}
	else if(choice==2)
	{
		int value;
		cout<<endl<<"Enter a Value u want to add"<<endl;
		cin>>value;
		l.add(value);
		cout<<endl;
	}
	else if(choice==3)
	{
		cout<<endl;
		l.remove();
		cout<<endl;
	}
	else if(choice==4)
	{
		cout<<endl;
		l.start();
		cout<<endl;
	}
	else if(choice==5)
	{
		cout<<endl;
		l.next();
		cout<<endl;
	}
	else if(choice==6)
	{
		goto finish;
	}
	else
	goto again;
	system("CLS");
	l.show();
	cout<<endl;
	goto loop;
	finish:
	cout<<"Thanks for using"<<endl;
}

#include"List.cpp"
main()
{
	int choice;
	List l;
	loop:
	cout<<"Enter your choice"<<endl;
	cout<<"1 to create list"<<endl;
	cout<<"2 to insert a value in current index"<<endl;
	cout<<"3 to remove a value from current index"<<endl;
	cout<<"4 to move current index to start"<<endl;
	cout<<"5 to move current index to end"<<endl;
	cout<<"6 to move current index to back"<<endl;
	cout<<"7 to move current index to next"<<endl;
	cout<<"8 to update the current index"<<endl;
	cout<<"9 to find a value in array"<<endl;
	cout<<"10 to clear the list"<<endl;
	cout<<"11 to close the program"<<endl;
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
		cout<<endl;
		l.insert();
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
		l.end();
		cout<<endl;
	}
	else if(choice==7)
	{
		cout<<endl;
		l.next();
		cout<<endl;
	}
	else if(choice==6)
	{
		cout<<endl;
		l.back();
		cout<<endl;
	}
	else if(choice==8)
	{
		cout<<endl;
		l.update();
		cout<<endl;
	}
	else if(choice==9)
	{
		cout<<endl;
		l.find();
		cout<<endl;
	}
	else if(choice==10)
	{
		cout<<endl;
		l.delet();
		cout<<endl;
	}
	else if(choice==11)
	{
		goto finish;
	}
	else
	goto again;
	system("cls");
	l.show();
	cout<<endl;
	goto loop;
	finish:
	cout<<"Thanks for using"<<endl;
}

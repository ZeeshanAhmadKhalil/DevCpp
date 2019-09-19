#include"List.cpp"
main()
{
	List l;
	int n=10,m=3;
	for(int i=1;i<=n;i++)
	l.add(i);
	l.start();
	l.show();
	cout<<endl;
	for(int i=1;i<10;i++)
	{
		for(int j=1;j<=m;j++)
		l.next();
		l.show();
		cout<<" is eleminated"<<endl;
		l.remove();
	}
	cout<<endl;
	l.show();
	cout<<" is the leader"<<endl;
	
	
}

#include"List.cpp"
main()
{
	List l;
	l.add(1);
	l.add(2);
	l.add(3);
	l.start();
//	l.pre();
	l.next();
	l.next();
	l.next();
//	l.pre();
	l.remove();
	l.get();
}

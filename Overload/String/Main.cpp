#include "Header.h"

int main()
{
	str a(100), b(100);
	a.input();
	b.input();

	/*
	str c = a + b;
	c.display();

	a = b;
	a.display();
	*/
	/*
	a += b;
	a.display();
	*/
	int n = a > b;
	if (n == 1)
		cout << "Da" << endl;
	else
		cout << "Net" << endl;

	int m = a < b;
	if (m == -1)
		cout << "Da" << endl;
	else
		cout << "Net" << endl;

	cout << a[4];

	str k = a(2,5);
	k.display();

	return 0;
}
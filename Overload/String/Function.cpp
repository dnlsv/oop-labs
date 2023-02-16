#include "Header.h"

str::str(int n1 = 0)
{
	n = n1;
	s = new char[n];
}

str::~str()
{
	delete[]s;
}

str::str(const str& ob)
{
	n = ob.n;
	s = new char[n];
	for (int i = 0; i < n; i++)
		s[i] = ob.s[i];
}

void str::display()
{
	for (int i = 0; i < strlen(s); i++)
		cout << this->s[i];
	cout << endl;
}

void str::input()
{
	cin.getline(s, 256);
	/*for (int i = 0; i < n; i++)
		cin >> s[i];*/
}

str str::operator +(str& other)
{
	str temp(n);
	strcpy_s(temp.s, 100, this->s);
	strcat_s(temp.s, 100, other.s);
	return temp;
}

str str::operator =(str& other)
{
	strcpy_s(this->s, 100, other.s);
	return *this;
}

str str::operator +=(str& other)
{
	strcat_s(this->s, 100, other.s);
	return *this;
}

int str::operator >(str& other)
{
	return strcmp(this->s, other.s);
}

int str::operator <(str& other)
{
	return strcmp(this->s, other.s);
}

char& str::operator [](int index)
{
	return this->s[index];
}

str str::operator()(int x, int y)
{
	str temp(y - x + 2);
	int i = 0;
	for (int j = x; j <= y; j++)
		temp.s[i++] = s[j];
	temp.s[i] = '\0';
	return temp;
}
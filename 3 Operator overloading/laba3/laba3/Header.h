#pragma once

#include <iostream>

using namespace std;

class str
{
	char* s;
	int n;
public:
	str(int n1);
	~str();
	str(const str& ob);
	void display();
	void input();
	str operator +(str& other);
	str operator =(str& other);
	str operator +=(str& other);
	int operator >(str& other);
	int operator <(str& other);
	char& operator [](int index);
	str operator()(int x, int y);
};
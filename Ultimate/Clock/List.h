#pragma once

#include <iostream>
#include <iomanip>
using namespace std;

template <class T>
struct Spis2
{
	T data; // данные
	Spis2<T>* next, * prev;
};

template <class T>
class List
{
private:
	Spis2<T>* begin, * end;
	int count;
public:
	List();
	~List();

	void AddEnd(T n);
	void AddBegin(T n);
	void Insert(int pos, T n);

	void DelAll();
	void Del(int pos = 0);

	void View();

	T& getElement(int pos);
};

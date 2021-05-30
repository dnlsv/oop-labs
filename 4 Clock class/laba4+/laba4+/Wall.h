#pragma once

#include "Mechanical.h"

class Wall : public Mechanical
{
private:
	char* form; //форма
	int value; //цена деления циферблата
public:
	Wall();
	~Wall();
	void set_form(char*);
	char* get_form();
	void set_value(int);
	int get_value();
	void input_wall();
	void view_wall();
};

Wall::Wall()
{
	form = new char[N];
	value = 0;
}

Wall::~Wall()
{
	delete[] form;
}

void Wall::set_form(char* buf)
{
	strcpy_s(form, N, buf);
}

char* Wall::get_form()
{
	return form;
}

void Wall::set_value(int buf)
{
	buf = value;
}

int Wall::get_value()
{
	return value;
}

void Wall::input_wall()
{
	cout << "Введите" << endl << "Производителя: ";
	cin >> producer;
	cout << "Материал: ";
	cin >> material;
	cout << "Цену: ";
	cin >> cost;
	cout << "Тип циферблата: ";
	cin >> face;
	cout << "Тип стекла: ";
	cin >> glass;
	cout << "Форма часов: ";
	cin >> form;
	cout << "Цена деления циферблата: ";
	cin >> value;
	cout << endl;
}

void Wall::view_wall()
{
	cout << setw(15) << producer << setw(10) << material << setw(6) << cost
		<< setw(16) << face << setw(12) << glass << setw(13) << form
		<< setw(14) << value << endl;
}
#pragma once

#include "Mechanical.h"

class Wall : public Mechanical
{
private:
	char form[RESERVESIZE]; //форма
	int value; //цена деления циферблата
public:
	Wall();
	~Wall();
	void set_form(char*);
	char* get_form();
	void set_value(int);
	int get_value();
	friend ostream& operator <<(ostream& out, Wall& obj);
	friend istream& operator >> (istream& in, Wall& obj);
	void tableCap();
	void edit();
};


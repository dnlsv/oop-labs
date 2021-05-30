#pragma once

#include "Clock.h"

class Electronic : public Clock
{
private:
	char type[RESERVESIZE]; //��� �����
	char platform[RESERVESIZE]; //���������
public:
	Electronic();
	~Electronic();
	void set_type(char*);
	char* get_type();
	void set_platform(char*);
	char* get_platform();
	friend ostream& operator <<(ostream& out, Electronic& obj);
	friend istream& operator >> (istream& in, Electronic& obj);
	void tableCap();
	void edit();
};


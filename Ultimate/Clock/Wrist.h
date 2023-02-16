#pragma once

#include "Mechanical.h"

class Wrist : public Mechanical
{
private:
	char materialrem[RESERVESIZE]; //�������� �������
	bool water; //����������
public:
	Wrist();
	~Wrist();
	void set_materialrem(char*);
	char* get_materialrem();
	void set_water(bool);
	bool get_water();
	friend ostream& operator <<(ostream& out, Wrist& obj);
	friend istream& operator >>(istream& in, Wrist& obj);
	void tableCap();
	void edit();
};
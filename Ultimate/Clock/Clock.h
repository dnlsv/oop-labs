#pragma once

#include <iostream>
#include <iomanip>

using namespace std;
const int RESERVESIZE = 100;

class Clock
{
protected:
	char producer[RESERVESIZE]; //�������������
	char material[RESERVESIZE]; //��������
	int cost; //���������
public:
	Clock();
	~Clock();
	void set_producer(char*);
	char* get_producer();
	void set_material(char*);
	char* get_material();
	void set_cost(int);
	int get_cost();
	friend ostream& operator <<(ostream& out, Clock& obj);
	friend istream& operator >>(istream& in, Clock& obj);
};


#pragma once

#include "Clock.h"

class Electronic : public Clock
{
private:
	char* type; //��� �����
	char* platform; //���������
public:
	Electronic();
	~Electronic();
	void set_type(char*);
	char* get_type();
	void set_platform(char*);
	char* get_platform();
	void input_electronic();
	void view_electronic();
};

Electronic::Electronic()
{
	type = new char[N];
	platform = new char[N];
}

Electronic::~Electronic()
{
	delete[] type;
	delete[] platform;
}

void Electronic::set_type(char* buf)
{
	strcpy_s(type, N, buf);
}

char* Electronic::get_type()
{
	return type;
}

void Electronic::set_platform(char* buf)
{
	strcpy_s(platform, N, buf);
}

char* Electronic::get_platform()
{
	return platform;
}

void Electronic::input_electronic()
{
	cout << "�������" << endl << "�������������: ";
	cin >> producer;
	cout << "��������: ";
	cin >> material;
	cout << "����: ";
	cin >> cost;
	cout << "��� �����: ";
	cin >> type;
	cout << "���������: ";
	cin >> platform;
	cout << endl;
}

void Electronic::view_electronic()
{
	cout << setw(15) << producer << setw(10) << material << setw(6) << cost
		<< setw(11) << type << setw(11) << platform <<  endl;
}
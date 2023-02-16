#pragma once

#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;
const int N = 100;

class Clock
{
protected:
	char* producer; //�������������
	char* material; //��������
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
	void head_wrist();
	void head_electronic();
	void head_wall();
};

Clock::Clock()
{
	producer = new char[N];
	material = new char[N];
	cost = 0;
}

Clock::~Clock()
{
	delete[]producer;
	delete[]material;
}

void Clock::set_producer(char* buf)
{
	strcpy_s(producer, N, buf);
}

char* Clock::get_producer()
{
	return producer;
}

void Clock::set_material(char* buf)
{
	strcpy_s(material, N, buf);
}

char* Clock::get_material()
{
	return material;
}

void Clock::set_cost(int buf)
{
	buf = cost;
}

int Clock::get_cost()
{
	return cost;
}

void Clock::head_wrist()
{
	cout << setw(3) << "�" << setw(15) << "�������������" << setw(10) << "��������" << setw(6) << "����" << setw(16) << "��� ����������" << setw(12)
		<< "��� ������" << setw(19) << "�������� �������" << setw(12) << "����������" << endl;
}

void Clock::head_wall()
{
	cout << setw(3) << "�" << setw(15) << "�������������" << setw(10) << "��������" << setw(6) << "����" << setw(16) << "��� ����������" << setw(12)
		<< "��� ������" << setw(13) << "����� �����" << setw(14) << "���� �������" << endl;
}

void Clock::head_electronic()
{
	cout << setw(3) << "�" << setw(15) << "�������������" << setw(10) << "��������" << setw(6) << "����" << setw(11) << "��� �����" << setw(11)
		<< "���������" << endl;
}
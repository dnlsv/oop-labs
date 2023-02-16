#pragma once

#include "Mechanical.h"

class Wrist : public Mechanical
{
private:
	char* materialrem; //�������� �������
	bool water; //����������
public:
	Wrist();
	~Wrist();
	void set_materialrem(char*);
	char* get_materialrem();
	void set_water(bool);
	bool get_water();
	void input_wrist();
	void view_wrist();
	friend istream& operator >> (istream& in, Wrist& w)
	{
		cout << "�������" << endl << "�������������: ";
		in >> w.producer;
		cout << "��������: ";
		in >> w.material;
		cout << "����: ";
		in >> w.cost;
		cout << "��� ����������: ";
		in >> w.face;
		cout << "��� ������: ";
		in >> w.glass;
		cout << "�������� �������: ";
		in >> w.materialrem;
		cout << "���������� (1 - ����, 0 - ���): ";
		in >> w.water;
		cout << endl;
		return in;
	}
	friend ostream& operator << (ostream& out, Wrist& w)
	{
		out << setw(15) << w.producer << setw(10) << w.material << setw(6) << w.cost
			<< setw(16) << w.face << setw(12) << w.glass << setw(19) << w.materialrem
			<< setw(12) << w.water << endl;
		return out;
	}
};

Wrist::Wrist()
{
	materialrem = new char[N];
	water = 0;
}

Wrist::	~Wrist()
{
	delete[] materialrem;
}

void Wrist::set_materialrem(char* buf)
{
	strcpy_s(materialrem, N, buf);
}

char* Wrist::get_materialrem()
{
	return materialrem;
}

void Wrist::set_water(bool buf)
{
	buf = water;
}

bool Wrist::get_water()
{
	return water;
}

void Wrist::input_wrist()
{
	cout << "�������" << endl << "�������������: ";
	cin >> producer;
	cout << "��������: ";
	cin >> material;
	cout << "����: ";
	cin >> cost;
	cout << "��� ����������: ";
	cin >> face;
	cout << "��� ������: ";
	cin >> glass;
	cout << "�������� �������: ";
	cin >> materialrem;
	cout << "���������� (1 - ����, 0 - ���): ";
	cin >> water;
	cout << endl;
}

void Wrist::view_wrist()
{
	cout << setw(15) << producer << setw(10) << material << setw(6) << cost
		<< setw(16) << face << setw(12) << glass << setw(19) << materialrem 
		<< setw(12) << water << endl;
}











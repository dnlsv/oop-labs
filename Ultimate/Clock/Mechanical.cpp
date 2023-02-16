#include "Mechanical.h"

Mechanical::Mechanical()
{
	face[0] = '\0';
	glass[0] = '\0';
}

Mechanical::~Mechanical()
{

}

void Mechanical::set_face(char* buf)
{
	strcpy_s(face, RESERVESIZE, buf);
}

char* Mechanical::get_face()
{
	return face;
}

void Mechanical::set_glass(char* buf)
{
	strcpy_s(glass, RESERVESIZE, buf);
}

char* Mechanical::get_glass()
{
	return glass;
}

ostream& operator <<(ostream& out, Mechanical& obj)
{
	out << dynamic_cast <Clock&>(obj);
	out << setw(16) << obj.face << setw(12) << obj.glass;
	return out;
}

istream& operator >> (istream& in, Mechanical& obj)
{
	in >> dynamic_cast<Clock&>(obj);
	cout << "��� ����������: ";
	in >> obj.face;
	cout << "��� ������: ";
	in >> obj.glass;
	return in;
}

void Mechanical::tableCap()
{
	cout << setw(15) << "�������������" << setw(10) << "��������" << setw(6) << "����"
		<< setw(16) << "��� ����������" << setw(12) << "��� ������" << setw(13) << "����� �����"
		<< setw(14) << "���� ������� ����������" << endl;
}
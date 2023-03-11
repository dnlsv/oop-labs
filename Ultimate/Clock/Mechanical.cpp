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
	cout << "Тип циферблата: ";
	in >> obj.face;
	cout << "Тип стекла: ";
	in >> obj.glass;
	return in;
}

void Mechanical::tableCap()
{
	cout << setw(15) << "Производитель" << setw(10) << "Материал" << setw(6) << "Цена"
		<< setw(16) << "Тип циферблата" << setw(12) << "Тип стекла" << setw(13) << "Форма часов"
		<< setw(14) << "Цена деления циферблата" << endl;
}

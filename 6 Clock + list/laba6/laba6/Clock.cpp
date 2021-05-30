#include "Clock.h"

Clock::Clock()
{
	producer[0] = '\0';
	material[0] = '\0';
	cost = 0;
}

Clock::~Clock()
{
	
}

void Clock::set_producer(char* buf)
{
	strcpy_s(producer, RESERVESIZE, buf);
}

char* Clock::get_producer()
{
	return producer;
}

void Clock::set_material(char* buf)
{
	strcpy_s(material, RESERVESIZE, buf);
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

ostream& operator <<(ostream& out, Clock& obj)
{
	out << setw(15) << obj.producer << setw(10) << obj.material << setw(6) << obj.cost;
	return out;
}

istream& operator >> (istream& in, Clock& obj)
{
	cout << "Введите" << endl << "Производителя: ";
	in >> obj.producer;
	cout << "Материал: ";
	in >> obj.material;
	cout << "Цену: ";
	in >> obj.cost;
	return in;
}
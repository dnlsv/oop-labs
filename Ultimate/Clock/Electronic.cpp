#include "Electronic.h"

Electronic::Electronic()
{
	type[0] = '\0';
	platform[0] = '\0';
}

Electronic::~Electronic()
{

}

void Electronic::set_type(char* buf)
{
	strcpy_s(type, RESERVESIZE, buf);
}

char* Electronic::get_type()
{
	return type;
}

void Electronic::set_platform(char* buf)
{
	strcpy_s(platform, RESERVESIZE, buf);
}

char* Electronic::get_platform()
{
	return platform;
}

ostream& operator <<(ostream& out, Electronic& obj)
{
	out << dynamic_cast <Clock&>(obj);
	out << setw(11) << obj.type << setw(11) << obj.platform << endl;
	return out;
}

istream& operator >> (istream& in, Electronic& obj)
{
	in >> dynamic_cast<Clock&>(obj);
	cout << "Тип часов: ";
	cin >> obj.type;
	cout << "Платформа: ";
	cin >> obj.platform;
	cout << endl;
	return in;
}

void Electronic::tableCap()
{
	cout << " " << setw(3) << left << "№" << setw(15) << "Производитель" << setw(10) << "Материал" << setw(6) << "Цена"
		<< setw(11) << "Тип часов" << setw(11) << "Платформа" << endl;
}

void Electronic::edit()
{
    int num;
    cout << endl << "\tКакие данные изменить?" << endl << endl << "1 - Производитель" << endl
        << "2 - Материал" << endl << "3 - Цена" << endl << "4 - Тип часов"
        << endl << "5 - Платформа" << endl;
    cin >> num;
    cout << endl << "\tВведите новые данные" << endl << endl;
    switch (num)
    {
    case 1:
        cin >> producer;
        break;
    case 2:
        cin >> material;
        break;
    case 3:
        cin >> cost;
        break;
    case 4:
        cin >> type;
        break;
    case 5:
        cin >> platform;
        break;
    }
}
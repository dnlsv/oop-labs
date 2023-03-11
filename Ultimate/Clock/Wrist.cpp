#include "Wrist.h"

Wrist::Wrist()
{
    materialrem[0] = '\0';
    water = 0;
}

Wrist::	~Wrist()
{

}

void Wrist::set_materialrem(char* buf)
{
    strcpy_s(materialrem, RESERVESIZE, buf);
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

ostream& operator <<(ostream& out, Wrist& obj)
{
    out << dynamic_cast <Mechanical&>(obj);
    out << setw(19) << obj.materialrem << setw(12) << obj.water << endl;
    return out;
}

istream& operator >> (istream& in, Wrist& obj)
{
    in >> dynamic_cast<Mechanical&>(obj);
    cout << "Материал ремешка: ";
    in >> obj.materialrem;
    cout << "Водозащита (1 - Есть, 0 - Нет): ";
    in >> obj.water;
    cout << endl;
    return in;
}

void Wrist::tableCap()
{
    cout << " " << setw(3) << left << "№" << setw(15) << "Производитель" << setw(10) << "Материал" << setw(6) << "Цена"
        << setw(16) << "Тип циферблата" << setw(12) << "Тип стекла" << setw(19) << "Материал ремешка"
        << setw(12) << "Водозащита" << endl;
}

void Wrist::edit()
{
    int num;
    cout << endl << "\tКакие данные изменить?" << endl << endl << "1 - Производитель" << endl
        << "2 - Материал" << endl << "3 - Цена" << endl << "4 - Тип циферблата"
        << endl << "5 - Тип стекла" << endl << "6 - Материал ремешка" << endl << "7 - Водозащита" << endl;
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
        cin >> face;
        break;
    case 5:
        cin >> glass;
        break;
    case 6:
        cin >> materialrem;
        break;
    case 7:
        cin >> water;
        break;
    }
}

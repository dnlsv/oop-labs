#pragma once

#include "Mechanical.h"

class Wrist : public Mechanical
{
private:
    char* materialrem; //материал ремешка
    bool water; //водозащита
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
        cout << "Введите" << endl << "Производителя: ";
        in >> w.producer;
        cout << "Материал: ";
        in >> w.material;
        cout << "Цену: ";
        in >> w.cost;
        cout << "Тип циферблата: ";
        in >> w.face;
        cout << "Тип стекла: ";
        in >> w.glass;
        cout << "Материал ремешка: ";
        in >> w.materialrem;
        cout << "Водозащита (1 - Есть, 0 - Нет): ";
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
    cout << "Введите" << endl << "Производителя: ";
    cin >> producer;
    cout << "Материал: ";
    cin >> material;
    cout << "Цену: ";
    cin >> cost;
    cout << "Тип циферблата: ";
    cin >> face;
    cout << "Тип стекла: ";
    cin >> glass;
    cout << "Материал ремешка: ";
    cin >> materialrem;
    cout << "Водозащита (1 - Есть, 0 - Нет): ";
    cin >> water;
    cout << endl;
}

void Wrist::view_wrist()
{
    cout << setw(15) << producer << setw(10) << material << setw(6) << cost
        << setw(16) << face << setw(12) << glass << setw(19) << materialrem
        << setw(12) << water << endl;
}

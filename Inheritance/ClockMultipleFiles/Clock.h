#pragma once

#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;
const int N = 100;

class Clock
{
protected:
    char* producer; //производитель
    char* material; //материал
    int cost; //стоимость
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
    cout << setw(3) << "№" << setw(15) << "Производитель" << setw(10) << "Материал" << setw(6) << "Цена" << setw(16) << "Тип циферблата" << setw(12)
        << "Тип стекла" << setw(19) << "Материал ремешка" << setw(12) << "Водозащита" << endl;
}

void Clock::head_wall()
{
    cout << setw(3) << "№" << setw(15) << "Производитель" << setw(10) << "Материал" << setw(6) << "Цена" << setw(16) << "Тип циферблата" << setw(12)
        << "Тип стекла" << setw(13) << "Форма часов" << setw(14) << "Цена деления" << endl;
}

void Clock::head_electronic()
{
    cout << setw(3) << "№" << setw(15) << "Производитель" << setw(10) << "Материал" << setw(6) << "Цена" << setw(11) << "Тип часов" << setw(11)
        << "Платформа" << endl;
}

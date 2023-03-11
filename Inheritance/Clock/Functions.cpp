#include"header.h"

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

void Clock::AddClock()
{
    cout << "\tВведите" << endl << "Производителя: ";
    cin >> producer;
    cout << endl << "Материал: ";
    cin >> material;
    cout << endl << "Цену: ";
    cin >> cost;
}

void Clock::ShowClock(int i)
{
    cout << ++i << ". " << producer << " " << material << " " << cost;
}

void Clock::EditClock(int temp)
{
    switch (temp)
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
    }
}

void Mechanical::AddMechanical()
{
    cout << endl << "Тип циферблата: ";
    cin >> face;
    cout << endl << "Тип стекла: ";
    cin >> glass;
}

Mechanical::Mechanical()
{
    face = new char[N];
    glass = new char[N];
}

Mechanical::~Mechanical()
{
    delete[] face;
    delete[] glass;
}

void Mechanical::ShowMechanical()
{
    cout << " " << face << " " << glass;
}

void Mechanical::EditMechanical(int temp)
{
    switch (temp)
    {
    case 4:
        cin >> face;
        break;
    case 5:
        cin >> glass;
        break;
    }
}

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

void Electronic::AddElectronic()
{
    cout << endl << "Тип часов: ";
    cin >> type;
    cout << endl << "Платформу: ";
    cin >> platform;
}

void Electronic::ShowElectronic()
{
    cout << " " << type << " " << platform << endl << endl;
}

void Electronic::EditElectronic(int temp)
{
    switch (temp)
    {
    case 4:
        cin >> type;
        break;
    case 5:
        cin >> platform;
        break;
    }
}

Wall::Wall()
{
    form = new char[N];
    value = 0;
}

Wall::~Wall()
{
    delete[] form;
}

void  Wall::AddWall()
{
    cout << endl << "Форму часов: ";
    cin >> form;
    cout << endl << "Цену деления циферблата: ";
    cin >> value;
}

void Wall::ShowWall()
{
    cout << " " << form << " " << value << endl << endl;
}

void Wall::EditWall(int temp)
{
    switch (temp)
    {
    case 6:
        cin >> form;
        break;
    case 7:
        cin >> value;
        break;
    }
}

Wrist::Wrist()
{
    materialrem = new char[N];
    water = 0;
}

Wrist::	~Wrist()
{
    delete[] materialrem;
}

void Wrist::AddWrist()
{

    cout << endl << "Материал ремешка: ";
    cin >> materialrem;
    cout << endl << "Водозащита (1 - Есть, 0 - Нет): ";
    cin >> water;
}

void Wrist::ShowWrist()
{
    cout << " " << materialrem << " " << water << endl << endl;
}

void Wrist::EditWrist(int temp)
{
    switch (temp)
    {
    case 6:
        cin >> materialrem;
        break;
    case 7:
        cin >> water;
        break;
    }
}

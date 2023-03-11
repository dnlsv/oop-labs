#pragma once

#include <iostream>
#include <vector>

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
    void AddClock();
    void ShowClock(int);
    void EditClock(int);
};

class Mechanical : public Clock
{
protected:
    char* face; //тип циферблата
    char* glass; //стекло
public:
    Mechanical();
    ~Mechanical();
    void AddMechanical();
    void ShowMechanical();
    void EditMechanical(int);
};

class Electronic : public Clock
{
private:
    char* type; //тип часов
    char* platform; //платформа
public:
    Electronic();
    ~Electronic();
    void AddElectronic();
    void ShowElectronic();
    void EditElectronic(int);
};

class Wall : public Mechanical
{
private:
    char* form; //форма
    int value; //цена деления циферблата
public:
    Wall();
    ~Wall();
    void AddWall();
    void ShowWall();
    void EditWall(int);
};

class Wrist : public Mechanical
{
private:
    char* materialrem; //материал ремешка
    bool water; //водозащита
public:
    Wrist();
    ~Wrist();
    void AddWrist();
    void ShowWrist();
    void EditWrist(int);
};

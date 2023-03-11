#pragma once

#include "Clock.h"

class Mechanical : public Clock
{
protected:
    char* face; //тип циферблата
    char* glass; //стекло
public:
    Mechanical();
    ~Mechanical();
    void set_face(char*);
    char* get_face();
    void set_glass(char*);
    char* get_glass();
};

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

void Mechanical::set_face(char* buf)
{
    strcpy_s(face, N, buf);
}

char* Mechanical::get_face()
{
    return face;
}

void Mechanical::set_glass(char* buf)
{
    strcpy_s(glass, N, buf);
}

char* Mechanical::get_glass()
{
    return glass;
}

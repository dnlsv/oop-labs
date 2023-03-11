#pragma once

#include "List.cpp"
#include "Electronic.h"
#include "Wall.h"
#include "Wrist.h"

template <class T>
class Interface
{
private:
    T element;
public:
    Interface() {}; //конструктор без параметров
    ~Interface() {}; //деструктор без параметров
    void menu(); //меню выбора данных для работы с ними
    void fun(List<T>& obj); //меню работы с данными выбранного типа
    void addElement(List<T>& obj); //добавление элемента
    void deleteElement(List<T>& obj); //удаление елемента
    void viewElements(List<T>& obj); //просмотр таблицы элементов
    void editElement(List<T>& obj); //редактирование елемента
};

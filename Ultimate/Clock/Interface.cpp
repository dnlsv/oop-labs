#include "Interface.h"

template<class T>
void Interface<T>::menu()
{
    int num;
    List<Electronic> tmp;
    List<Wrist> tmp1;
    List<Wall> tmp2;

    while (1)
    {
        cout << "\tЧАСЫ" << endl << endl;
        cout << "1 - Электронные часы" << endl << "2 - Наручные часы" << endl << "3 - Настенные часы" << endl << "0 - Вернуться" << endl;
        cin >> num;
        switch (num)
        {
        case 1:
        {
            Interface<Electronic> obj;
            obj.fun(tmp);
            break;
        }
        case 2:
        {
            Interface<Wrist> obj1;
            obj1.fun(tmp1);
            break;
        }
        case 3:
        {
            Interface<Wall> obj2;
            obj2.fun(tmp2);
            break;
        }
        case 0:
            return;
        }
    }
}

template <class T>
void Interface<T>::fun(List<T>& obj)
{
    int num;
    bool flag = true;
    while (flag)
    {
        cout << endl << "1 - Добавить" << endl << "2 - Удалить" << endl << "3 - Просмотр" << endl << "4 - Редактировать" << endl << "0 - Вернуться" << endl;
        cin >> num;
        switch (num)
        {
        case 1:
            this->addElement(obj);
            break;
        case 2:
            this->deleteElement(obj);
            break;
        case 3:
            this->viewElements(obj);
            break;
        case 4:
            this->editElement(obj);
            break;
        case 0:
            flag = false;
            break;
        }
    }
}

template <class T>
void Interface<T>::addElement(List<T>& obj)
{
    cout << endl;
    cin >> element;
    obj.AddEnd(element);
    cout << endl << "Запись добавлена!" << endl;
}

template <class T>
void Interface<T>::deleteElement(List<T>& obj)
{
    int num;
    viewElements(obj);
    cout << endl << "Введите номер записи для удаления:" << endl;
    cin >> num;
    obj.Del(num);
    cout << endl << "Запись удалена!" << endl;
}

template <class T>
void Interface<T>::viewElements(List<T>& obj)
{
    cout << endl;
    element.tableCap();
    obj.View();
}

template <class T>
void Interface<T>::editElement(List<T>& obj)
{
    int num;
    viewElements(obj);
    cout << endl << "Введите номер записи для редактирования:" << endl;
    cin >> num;
    element = obj.getElement(num);
    element.edit();
    obj.Del(num);
    obj.Insert(num, element);
    cout << endl << "Запись отредактирована!" << endl;
}

#include <iostream>
using namespace std;

template <class T>
struct Spis2
{
    T data; // данные
    Spis2<T>* next, * prev;
};

template <class T>
class List
{
private:
    Spis2<T>* begin, * end;
    int count;
public:
    List();
    ~List();

    void AddEnd(T n);
    void AddBegin(T n);
    void Insert(int pos = 0);

    void DelAll();
    void Del(int pos = 0);

    void View();

    void Search();

    void Menu();
};

template <class T>
List<T>::List()
{
    begin = end = NULL;
    count = 0;
}

template <class T>
List<T>::~List()
{
    DelAll();
}

template <class T>
void List<T>::AddBegin(T n)
{
    Spis2<T>* temp = new Spis2<T>;
    temp->prev = 0;
    temp->data = n;
    temp->next = begin;
    if (begin != 0)
        begin->prev = temp;
    if (count == 0)
        begin = end = temp;
    else
        begin = temp;
    count++;
}

template <class T>
void List<T>::AddEnd(T n)
{
    Spis2<T>* temp = new Spis2<T>;
    temp->next = 0;
    temp->data = n;
    temp->prev = end;
    if (end != 0)
        end->next = temp;
    if (count == 0)
        begin = end = temp;
    else
        end = temp;
    count++;
}

template <class T>
void List<T>::Insert(int pos)
{
    int num;
    cout << "\tДобавление:" << endl << "1 - В начало" << endl << "2 - В конец" << endl;
    cin >> num;
    if (num != 1 && num != 2)
    {
        cout << "Неверная позиция!\n";
        return;
    }
    if (num == 1)
    {
        int data;
        cout << "Введите данные: ";
        cin >> data;
        AddBegin(data);
        return;
    }
    if (num == 2)
    {
        int data;
        cout << "Введите данные: ";
        cin >> data;
        AddEnd(data);
        return;
    }
}



template <class T>
void List<T>::Del(int pos)
{
    if (pos == 0)
    {
        cout << "Введите позицию: ";
        cin >> pos;
    }
    if (pos < 1 || pos > count)
    {
        cout << "Неверная позиция!\n";
        return;
    }
    Spis2<T>* del = begin;
    for (int i = 1; i < pos; i++)
        del = del->next;

    Spis2<T>* prevd = del->prev;
    Spis2<T>* after = del->next;
    if (prevd != 0)
        prevd->next = after;
    if (after != 0)
        after->prev = prevd;
    if (pos == 1)
        begin = after;
    if (pos == count)
        end = prevd;

    delete del;
    count--;
}

template <class T>
void List<T>::View()
{
    if (count != 0)
    {
        Spis2<T>* temp = begin;
        cout << endl;
        while (temp->next != 0)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << temp->data << endl;
    }
}

template <class T>
void List<T>::Search()
{
    if (count != 0)
    {
        T d;
        cout << "Введите параметр поиска" << endl;
        cin >> d;

        Spis2<T>* temp = begin;
        cout << endl;
        while (temp->next != 0)
        {
            if (temp->data == d)
                cout << temp->data << " ";
            temp = temp->next;
        }
        cout << temp->data << endl;
    }
}

template <class T>
void List<T>::DelAll()
{
    while (count != 0)
        Del(1);
}

template <class T>
void List<T>::Menu()
{
    List<T> w;
    cout << "-------Spis2-------" << endl;
    while (true)
    {
        int kod;
        cout << endl << "1 - Добавление" << endl << "2 - Удаление" << endl << "3 - Просмотр" << endl << "4 - Поиск" << endl << "0 - Выход" << endl;
        cin >> kod;
        switch (kod)
        {
        case 1:
            w.Insert();
            break;
        case 2:
            w.Del();
            break;
        case 3:
            w.View();
            break;
        case 4:
            w.Search();
            break;
        case 0:
            w.DelAll();
            return;
        }
    }
}

int main()
{
    setlocale(LC_ALL, ".UTF8");
    List<double> ob;
    ob.Menu();
    system("pause");
}

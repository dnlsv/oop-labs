#include<iostream>
#include<iomanip> 
using namespace std;

class Array
{
    int* arr;	// указатель на массив
    int n;	// количество элементов массива 
public:
    Array(int n1 = 0);	// конструктор с параметрами по умолчанию 
    void vvod();	// функция ввода значений массива
    void display();	// функция вывода значений массива
    int fun(Array& ob);	// функция вычисления суммы элементов массива
    ~Array();	// деструктор
};

Array::Array(int n1)	// определение конструктора
{
    n = n1;
    arr = new int[n];

}

Array::~Array()	// определение деструктора
{
    delete[] arr;
}

void Array::vvod()	// определение функции ввода значений массива
{
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}
void Array::display()	// определение функции вывода значений массива
{
    for (int i = 0; i < n; i++)
        cout << setw(4) << arr[i]; cout << endl;
}
int Array::fun(Array& ob) // функция вычисления суммы элементов массива
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += ob.arr[i];
    return sum;
}
int  main()	// головная функция
{
    setlocale(LC_ALL, ".UTF8");
    int summa;
    int n;	// размер массива
    cout << "Введите размер массива" << endl;
    cin >> n;
    Array ob(n);	// объявление объекта 
    cout << "Введите элементы массива" << endl;
    ob.vvod();		// вызов функции vvod 
    cout << "Исходный массив" << endl;
    ob.display();	// вызов функции display 
    summa = ob.fun(ob);	// вызов функции fun
    cout << "сумма элементов массива" << setw(4) << summa << endl;
    ob.display();	// при вызове функции display() возникает ошибка
}

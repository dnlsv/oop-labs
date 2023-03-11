#include "Header.h"

int main() {
    setlocale(LC_ALL, ".UTF8");
    srand(time(NULL));
    int n, m;
    cout << "Введите размер массива" << endl;
    cout << "n = ";
    cin >> n;
    m = n;
    matr a(n, m);
    cout << "Введите элементы массива" << endl;
    a.input();
    cout << "Исходный массив №1" << endl;
    a.output();
    matr b(n, m);
    cout << "Введите элементы массива" << endl;
    b.input();
    cout << "Исходный массив №2" << endl;
    b.output();
    matr rez = a.addition(b);
    cout << "Сложение:" << endl;
    rez.output();
    matr otv = a.multiplication(b);
    cout << "Произведение:" << endl;
    otv.output();

    matr per = a + b;
    per.output();

    matr rep = a * b;
    rep.output();
}

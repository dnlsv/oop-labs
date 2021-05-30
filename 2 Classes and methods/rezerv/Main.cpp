#include "Header.h"

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int n, m;	// размер массива
	cout << "Введите размер массива" << endl;
	cout << "n = ";
	cin >> n;
	cout << "m = ";
	cin >> m;
	matr a(n, m);
	a.input();
	cout << "Исходный массив №1" << endl;
	a.output();
	matr b(n, m);
	b.input();
	cout << "Исходный массив №2" << endl;
	b.output();
	matr rez(n, m);
	rez.addition(rez, a, b);
	cout << "Сложение:" << endl;
	rez.output();
	matr otv(n, m);
	rez.multiplication(otv, a, b);
	cout << "Произведение:" << endl;
	otv.output();
}
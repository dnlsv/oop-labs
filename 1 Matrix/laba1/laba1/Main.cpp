#include "Header.h"

int main() {
	setlocale(LC_ALL, "rus");
	int **a, **b, **rez, n, m, **otv;
	srand(time(NULL));
	cout << "������� ����������� ������" << endl;
	cout << "n = ";
	cin >> n;
	cout << "m = ";
	cin >> m;
	cout << endl;
	a = Memory(n, m);
	input(a, n, m);
	output(a, n, m);
	b = Memory(n, m);
	input(b, n, m);
	output(b, n, m);
	rez = Memory(n, m);
	cout << "��������:" << endl;
	otv = addition(a, b, n, m);
	output(otv, n, m);
	del(rez, n);
	rez = Memory(n, m);
	cout << "������������:" << endl;
	multiplication(rez, a, b, n, m);
	output(rez, n, m);
	del(a, n);
	del(b, n);
	del(rez, n);
	system("pause");
}
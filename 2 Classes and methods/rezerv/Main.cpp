#include "Header.h"

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int n, m;	// ������ �������
	cout << "������� ������ �������" << endl;
	cout << "n = ";
	cin >> n;
	cout << "m = ";
	cin >> m;
	matr a(n, m);
	a.input();
	cout << "�������� ������ �1" << endl;
	a.output();
	matr b(n, m);
	b.input();
	cout << "�������� ������ �2" << endl;
	b.output();
	matr rez(n, m);
	rez.addition(rez, a, b);
	cout << "��������:" << endl;
	rez.output();
	matr otv(n, m);
	rez.multiplication(otv, a, b);
	cout << "������������:" << endl;
	otv.output();
}
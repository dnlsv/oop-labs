#include "Header.h"

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int n, m;	
	cout << "������� ������ �������" << endl;
	cout << "n = ";
	cin >> n;
	m = n;
	matr* a;
	a = new matr(n,m);
	cout << "������� �������� �������" << endl;
	a->input();
	cout << "�������� ������ �1" << endl;
	a->output();
	matr b(n, m);
	cout << "������� �������� �������" << endl;
	b.input();
	cout << "�������� ������ �2" << endl;
	b.output();
	matr rez = a->addition(b);
	cout << "��������:" << endl;
	rez.output();
	matr otv=a->multiplication(b);
	cout << "������������:" << endl;
	otv.output();
}
#include "Header.h"

matr::matr(int n1, int m1) {
	n = n1;
	m = m1;
	arr = new int* [n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[m];
	}
}

matr::~matr() {
	for (int i = 0; i < n; i++)
		delete[]arr[i];
	delete[]arr;
}

void matr::input() {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			arr[i][j] = rand() % (20 - (-20) + 1) + (-20);
}

void matr::output() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << setw(5) << arr[i][j];
		cout << endl;
	}
	cout << endl;
}

void matr::addition(matr& rez, matr& a, matr& b) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			rez.arr[i][j] = a.arr[i][j] + b.arr[i][j];
}

void matr::multiplication(matr& otv, matr& a, matr& b) {
	int sum;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			sum = 0;
			for (int k = 0; k < n; k++)
				sum += a.arr[i][j] * b.arr[i][j];
			otv.arr[i][j] = sum;
		}
}
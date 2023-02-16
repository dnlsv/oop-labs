#include "Header.h"

matr::matr(int n1, int m1) {
	n = n1;
	m = m1;
	arr = new int* [n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[m];
	}
}

matr::matr(const matr& ob)
{
	n = ob.n; 
	m = ob.m;
	arr = new int* [n];
	for (int i = 0; i < n; i++)
		arr[i] = new int[m];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			arr[i][j] = ob.arr[i][j];
}


matr::~matr() {
	for (int i = 0; i < n; i++)
		delete[]arr[i];
	delete[]arr;
}

void matr::input() {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];
}

void matr::output() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << setw(5) << arr[i][j];
		cout << endl;
	}
	cout << endl;
}

matr matr::addition(matr& b)
{
	matr rez(n, m);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			rez.arr[i][j] = arr[i][j] + b.arr[i][j];
	return rez;
}


matr matr::multiplication(matr& b) 
{
	int sum;
	matr otv(n, m);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) 
		{
			sum = 0;
			for (int k = 0; k < n; k++)
				sum += arr[i][j] * b.arr[i][j];
			otv.arr[i][j] = sum;
		}
	return otv;
}
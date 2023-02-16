#pragma once

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

class matr 
{
	int** arr, n, m;
	public:
		matr(int n1 = 0, int m1 = 0);
		matr(const matr&);
		void input();
		void output();
		matr addition(matr&);
		matr multiplication(matr&);
		~matr();
};
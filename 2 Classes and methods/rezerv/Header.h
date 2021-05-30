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
		void input();
		void output();
		void addition(matr&, matr&, matr&);
		void multiplication(matr&, matr&, matr&);
		~matr();
};
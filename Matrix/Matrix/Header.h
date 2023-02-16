#pragma once

#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int **Memory(int n, int m);
void autoinput(int **arr, int n, int m);
void manualintput(int **arr, int n, int m);
void input(int **arr, int n, int m);
void output(int **arr, int n, int m);
int **addition(int **a, int **b, int n, int m);
void multiplication(int **rez, int **a, int **b, int n, int m);
void del(int **arr, int n);
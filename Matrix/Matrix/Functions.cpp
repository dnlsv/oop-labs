#include "Header.h"

int** Memory(int n, int m) {
    int** arr;
    arr = new int* [n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[m];
    }
    return arr;
}

void del(int** arr, int n) {
    for (int i = 0; i < n; i++)
        delete[]arr[i];
    delete[]arr;
}

void autoinput(int** arr, int n, int m) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            arr[i][j] = rand() % (20 - (-20) + 1) + (-20);
}

void manualintput(int** arr, int n, int m) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
}

void input(int** arr, int n, int m) {
    int z;
    cout << "Создайте матрицу" << endl << "1 - Автоматически" << endl << "2 - Вручную" << endl;
    cin >> z;
    if (z == 1)
        autoinput(arr, n, m);
    else {
        cout << "Введите элемменты" << endl;
        manualintput(arr, n, m);
    }
}

void output(int** arr, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << setw(5) << arr[i][j];
        cout << endl;
    }
    cout << endl;
}

int** addition(int** a, int** b, int n, int m) {
    int** rez;
    rez = Memory(n, m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            rez[i][j] = a[i][j] + b[i][j];
    return rez;
}

void multiplication(int** rez, int** a, int** b, int n, int m) {
    int sum;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            sum = 0;
            for (int k = 0; k < n; k++)
                sum += a[i][j] * b[i][j];
            rez[i][j] = sum;
        }
}

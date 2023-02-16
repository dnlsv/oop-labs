#include<iostream>
#include<iomanip> 
using namespace std;

class Array
{
	int* arr;	// указатель на массив
	int n;	// количество элементов массива 
public:
	Array(int n1 = 0);	// конструктор с параметрами по умолчанию 
	void vvod();	// функци€ ввода значений массива
	void display();	// функци€ вывода значений массива
	int fun(Array& ob);	// функци€ вычислени€ суммы элементов массива
	~Array();	// деструктор
};

Array::Array(int n1)	// определение конструктора
{
	n = n1; 
	arr = new int[n];

}

Array::~Array()	// определение деструктора
{
	delete[] arr;
}

void Array::vvod()	// определение функции ввода значений массива
{
	for (int i = 0; i < n; i++) 
		cin >> arr[i];
}
void Array::display()	// определение функции вывода значений массива
{
	for (int i = 0; i < n; i++)
		cout << setw(4) << arr[i]; cout << endl;
}
int Array::fun(Array& ob) // функци€ вычислени€ суммы элементов массива
{
	int sum = 0;
	for (int i = 0; i < n; i++) 
		sum += ob.arr[i];
	return sum;
}
int  main()	// головна€ функци€
{
	setlocale(LC_ALL, "Russian"); 
	int summa;
	int n;	// размер массива
	cout << "¬ведите размер массива" << endl; 
	cin >> n;
	Array ob(n);	// объ€вление объекта 
	cout << "¬ведите элементы массива" << endl; 
	ob.vvod();		// вызов функции vvod 
	cout << "»сходный массив" << endl;
	ob.display();	// вызов функции display 
	summa = ob.fun(ob);	// вызов функции fun
	cout << "сумма элементов массива" << setw(4) << summa << endl; 
	ob.display();	// при вызове функции display() возникает ошибка
}
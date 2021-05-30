#include<iostream>
#include<iomanip> 
using namespace std;

class Massiv
{
	int* mas;	// указатель на массив
	int n;	// количество элементов массива 
public:
	Massiv(int n1 = 0);	// конструктор с параметрами по умолчанию 
	void vvod();	// функци€ ввода значений массива
	void display();	// функци€ вывода значений массива
	int fun(Massiv& ob);	// функци€ вычислени€ суммы элементов массива
	~Massiv();	// деструктор
};

Massiv::Massiv(int n1)	// определение конструктора
{
	n = n1; 
	mas = new int[n];

}

Massiv::~Massiv()	// определение деструктора
{
	delete[] mas;
}

void Massiv::vvod()	// определение функции ввода значений массива
{
	for (int i = 0; i < n; i++) 
		cin >> mas[i];
}
void Massiv::display()	// определение функции вывода значений массива
{
	for (int i = 0; i < n; i++)
		cout << setw(4) << mas[i]; cout << endl;
}
int Massiv::fun(Massiv& ob) // функци€ вычислени€ суммы элементов массива
{
	int sum = 0;
	for (int i = 0; i < n; i++) 
		sum += ob.mas[i];
	return sum;
}
int  main()	// головна€ функци€
{
	setlocale(LC_ALL, "Russian"); 
	int summa;
	int n;	// размер массива
	cout << "¬ведите размер массива" << endl; 
	cin >> n;
	Massiv ob(n);	// объ€вление объекта 
	cout << "¬ведите элементы массива" << endl; 
	ob.vvod();		// вызов функции vvod 
	cout << "»сходный массив" << endl;
	ob.display();	// вызов функции display 
	summa = ob.fun(ob);	// вызов функции fun
	cout << "сумма элементов массива" << setw(4) << summa << endl; 
	ob.display();	// при вызове функции display() возникает ошибка
}
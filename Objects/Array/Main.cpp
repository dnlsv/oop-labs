#include<iostream>
#include<iomanip> 
using namespace std;

class Array
{
	int* arr;	// ��������� �� ������
	int n;	// ���������� ��������� ������� 
public:
	Array(int n1 = 0);	// ����������� � ����������� �� ��������� 
	void vvod();	// ������� ����� �������� �������
	void display();	// ������� ������ �������� �������
	int fun(Array& ob);	// ������� ���������� ����� ��������� �������
	~Array();	// ����������
};

Array::Array(int n1)	// ����������� ������������
{
	n = n1; 
	arr = new int[n];

}

Array::~Array()	// ����������� �����������
{
	delete[] arr;
}

void Array::vvod()	// ����������� ������� ����� �������� �������
{
	for (int i = 0; i < n; i++) 
		cin >> arr[i];
}
void Array::display()	// ����������� ������� ������ �������� �������
{
	for (int i = 0; i < n; i++)
		cout << setw(4) << arr[i]; cout << endl;
}
int Array::fun(Array& ob) // ������� ���������� ����� ��������� �������
{
	int sum = 0;
	for (int i = 0; i < n; i++) 
		sum += ob.arr[i];
	return sum;
}
int  main()	// �������� �������
{
	setlocale(LC_ALL, "Russian"); 
	int summa;
	int n;	// ������ �������
	cout << "������� ������ �������" << endl; 
	cin >> n;
	Array ob(n);	// ���������� ������� 
	cout << "������� �������� �������" << endl; 
	ob.vvod();		// ����� ������� vvod 
	cout << "�������� ������" << endl;
	ob.display();	// ����� ������� display 
	summa = ob.fun(ob);	// ����� ������� fun
	cout << "����� ��������� �������" << setw(4) << summa << endl; 
	ob.display();	// ��� ������ ������� display() ��������� ������
}
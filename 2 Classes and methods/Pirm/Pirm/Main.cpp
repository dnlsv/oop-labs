#include<iostream>
#include<iomanip> 
using namespace std;

class Massiv
{
	int* mas;	// ��������� �� ������
	int n;	// ���������� ��������� ������� 
public:
	Massiv(int n1 = 0);	// ����������� � ����������� �� ��������� 
	void vvod();	// ������� ����� �������� �������
	void display();	// ������� ������ �������� �������
	int fun(Massiv& ob);	// ������� ���������� ����� ��������� �������
	~Massiv();	// ����������
};

Massiv::Massiv(int n1)	// ����������� ������������
{
	n = n1; 
	mas = new int[n];

}

Massiv::~Massiv()	// ����������� �����������
{
	delete[] mas;
}

void Massiv::vvod()	// ����������� ������� ����� �������� �������
{
	for (int i = 0; i < n; i++) 
		cin >> mas[i];
}
void Massiv::display()	// ����������� ������� ������ �������� �������
{
	for (int i = 0; i < n; i++)
		cout << setw(4) << mas[i]; cout << endl;
}
int Massiv::fun(Massiv& ob) // ������� ���������� ����� ��������� �������
{
	int sum = 0;
	for (int i = 0; i < n; i++) 
		sum += ob.mas[i];
	return sum;
}
int  main()	// �������� �������
{
	setlocale(LC_ALL, "Russian"); 
	int summa;
	int n;	// ������ �������
	cout << "������� ������ �������" << endl; 
	cin >> n;
	Massiv ob(n);	// ���������� ������� 
	cout << "������� �������� �������" << endl; 
	ob.vvod();		// ����� ������� vvod 
	cout << "�������� ������" << endl;
	ob.display();	// ����� ������� display 
	summa = ob.fun(ob);	// ����� ������� fun
	cout << "����� ��������� �������" << setw(4) << summa << endl; 
	ob.display();	// ��� ������ ������� display() ��������� ������
}
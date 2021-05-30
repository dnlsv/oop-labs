#include "Wrist.h"

Wrist::Wrist()
{
	materialrem[0] = '\0';
	water = 0;
}

Wrist::	~Wrist()
{

}

void Wrist::set_materialrem(char* buf)
{
	strcpy_s(materialrem, RESERVESIZE, buf);
}

char* Wrist::get_materialrem()
{
	return materialrem;
}

void Wrist::set_water(bool buf)
{
	buf = water;
}

bool Wrist::get_water()
{
	return water;
}

ostream& operator <<(ostream& out, Wrist& obj)
{
	out << dynamic_cast <Mechanical&>(obj);
	out << setw(19) << obj.materialrem << setw(12) << obj.water << endl;
	return out;
}

istream& operator >> (istream& in, Wrist& obj)
{
	in >> dynamic_cast<Mechanical&>(obj);
	cout << "�������� �������: ";
	in >> obj.materialrem;
	cout << "���������� (1 - ����, 0 - ���): ";
	in >> obj.water;
	cout << endl;
	return in;
}

void Wrist::tableCap()
{
	cout << " " << setw(3) << left << "�" << setw(15) << "�������������" << setw(10) << "��������" << setw(6) << "����"
		<< setw(16) << "��� ����������" << setw(12) << "��� ������" << setw(19) << "�������� �������"
		<< setw(12) << "����������" << endl;
}

void Wrist::edit()
{
    int num;
    cout << endl << "\t����� ������ ��������?" << endl << endl << "1 - �������������" << endl
        << "2 - ��������" << endl << "3 - ����" << endl << "4 - ��� ����������"
        << endl << "5 - ��� ������" << endl << "6 - �������� �������" << endl << "7 - ����������" << endl;
    cin >> num;
    cout << endl << "\t������� ����� ������" << endl << endl;
    switch (num)
    {
    case 1:
        cin >> producer;
        break;
    case 2:
        cin >> material;
        break;
    case 3:
        cin >> cost;
        break;
    case 4:
        cin >> face;
        break;
    case 5:
        cin >> glass;
        break;
    case 6:
        cin >> materialrem;
        break;
    case 7:
        cin >> water;
        break;
    }
}









#include "Wall.h"

Wall::Wall()
{
	form[0] = '\0';
	value = 0;
}

Wall::~Wall()
{

}

void Wall::set_form(char* buf)
{
	strcpy_s(form, RESERVESIZE, buf);
}

char* Wall::get_form()
{
	return form;
}

void Wall::set_value(int buf)
{
	buf = value;
}

int Wall::get_value()
{
	return value;
}

ostream& operator <<(ostream& out, Wall& obj)
{
	out << dynamic_cast <Mechanical&>(obj);
	out  << setw(13) << obj.form << setw(14) << obj.value << endl;
	return out;
}

istream& operator >> (istream& in, Wall& obj)
{
	in >> dynamic_cast<Mechanical&>(obj);
	cout << "����� �����: ";
	in >> obj.form;
	cout << "���� ������� ����������: ";
	in >> obj.value;
	cout << endl;
	return in;
}

void Wall::tableCap()
{
	cout << " " << setw(3) << left << "�" << setw(15) << "�������������" << setw(10) << "��������" << setw(6) << "����"
		<< setw(16) << "��� ����������" << setw(12) << "��� ������" << setw(13) << "����� �����"
		<< setw(14) << "���� ������� ����������" << endl;
}

void Wall::edit()
{
    int num;
    cout << endl << "\t����� ������ ��������?" << endl << endl << "1 - �������������" << endl
        << "2 - ��������" << endl << "3 - ����" << endl << "4 - ��� ����������"
        << endl << "5 - ��� ������" << endl << "6 - ����� �����" << endl << "7 - ���� ������� ����������" << endl;
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
        cin >> form;
        break;
    case 7:
        cin >> value;
        break;
    }
}
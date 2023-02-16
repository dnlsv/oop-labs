#include "Electronic.h"

Electronic::Electronic()
{
	type[0] = '\0';
	platform[0] = '\0';
}

Electronic::~Electronic()
{

}

void Electronic::set_type(char* buf)
{
	strcpy_s(type, RESERVESIZE, buf);
}

char* Electronic::get_type()
{
	return type;
}

void Electronic::set_platform(char* buf)
{
	strcpy_s(platform, RESERVESIZE, buf);
}

char* Electronic::get_platform()
{
	return platform;
}

ostream& operator <<(ostream& out, Electronic& obj)
{
	out << dynamic_cast <Clock&>(obj);
	out << setw(11) << obj.type << setw(11) << obj.platform << endl;
	return out;
}

istream& operator >> (istream& in, Electronic& obj)
{
	in >> dynamic_cast<Clock&>(obj);
	cout << "��� �����: ";
	cin >> obj.type;
	cout << "���������: ";
	cin >> obj.platform;
	cout << endl;
	return in;
}

void Electronic::tableCap()
{
	cout << " " << setw(3) << left << "�" << setw(15) << "�������������" << setw(10) << "��������" << setw(6) << "����"
		<< setw(11) << "��� �����" << setw(11) << "���������" << endl;
}

void Electronic::edit()
{
    int num;
    cout << endl << "\t����� ������ ��������?" << endl << endl << "1 - �������������" << endl
        << "2 - ��������" << endl << "3 - ����" << endl << "4 - ��� �����"
        << endl << "5 - ���������" << endl;
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
        cin >> type;
        break;
    case 5:
        cin >> platform;
        break;
    }
}
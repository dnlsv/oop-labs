#pragma once

#include "List.cpp"
#include "Electronic.h"
#include "Wall.h"
#include "Wrist.h"

template <class T>
class Interface
{
private:
	T element;
public:
	Interface() {}; //����������� ��� ����������
	~Interface() {}; //���������� ��� ����������
	void menu(); //���� ������ ������ ��� ������ � ����
	void fun(List<T>& obj); //���� ������ � ������� ���������� ����
	void addElement(List<T>& obj); //���������� ��������
	void deleteElement(List<T>& obj); //�������� ��������
	void viewElements(List<T>& obj); //�������� ������� ���������
	void editElement(List<T>& obj); //�������������� ��������
};

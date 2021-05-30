#pragma once

#include <iostream>
#include <vector>

using namespace std;
const int N = 100;

class Clock
{
protected:
	char* producer; //�������������
	char* material; //��������
	int cost; //���������
public:
	Clock();
	~Clock();
	void AddClock();
	void ShowClock(int);
	void EditClock(int);
};

class Mechanical : public Clock
{
protected:
	char* face; //��� ����������
	char* glass; //������
public:
	Mechanical();
	~Mechanical();
	void AddMechanical();
	void ShowMechanical();
	void EditMechanical(int);
};

class Electronic : public Clock
{
private:
	char* type; //��� �����
	char* platform; //���������
public:
	Electronic();
	~Electronic();
	void AddElectronic();
	void ShowElectronic();
	void EditElectronic(int);
};

class Wall : public Mechanical
{
private:
	char* form; //�����
	int value; //���� ������� ����������
public:
	Wall();
	~Wall();
	void AddWall();
	void ShowWall();
	void EditWall(int);
};

class Wrist : public Mechanical
{
private:
	char* materialrem; //�������� �������
	bool water; //����������
public:
	Wrist();
	~Wrist();
	void AddWrist();
	void ShowWrist();
	void EditWrist(int);
};



#include"header.h"

int main()
{
	setlocale(LC_ALL, "rus");
	int num, nus, pr, kol1 = 0, kol2 = 0, kol3 = 0, nomer, temp;
	bool flag, f;
	Wrist* w = new Wrist[N];
	Wall* q = new Wall[N];
	Electronic* e = new Electronic[N];

	while (true)
	{
		cout << "\t����" << endl << "1 - ������������" << endl << "2 - �����������" << endl << "0 - �����" << endl;
		cin >> num;
		switch (num)
		{
		case 1:
			flag = true;
			while (flag == true)
			{
				cout << "\t������������ ����" << endl << "1 - ���������" << endl << "2 - ��������" << endl << "0 - ���������" << endl;
				cin >> nus;
				switch (nus)
				{
				case 1:
					f = true;
					while (f == true)
					{
						cout << "\t��������" << endl;
						cout << "1 - ����������" << endl << "2 - ��������" << endl
							<< "3 - ��������������" << endl << "0 - ���������" << endl;
						cin >> pr;
						switch (pr)
						{
						case 1:
							kol1++;
							q[kol1 - 1].AddClock();
							q[kol1 - 1].AddMechanical();
							q[kol1 - 1].AddWall();
							break;
						case 2:
							cout << "\t������" << endl;
							for (int i = 0; i < kol1; i++)
							{
								q[i].ShowClock(i);
								q[i].ShowMechanical();
								q[i].ShowWall();
							}
							break;
						case 3:
							cout << "\t������" << endl;
							for (int i = 0; i < kol1; i++)
							{
								q[i].ShowClock(i);
								q[i].ShowMechanical();
								q[i].ShowWall();
							}
							cout << "������� ����� �����" << endl;
							cin >> nomer;
							cout << "\t����� ������ ��������?" << endl << "1 - �������������"
								<< endl << "2 - ��������" << endl << "3 - ���������" << endl;
							cout << "4 - ��� ����������" << endl << "5 - ������" << endl;
							cout << "6 - �����" << endl << "7 - ���� ������� ����������" << endl;
							cin >> temp;
							q[nomer - 1].EditClock(temp);
							q[nomer - 1].EditMechanical(temp);
							q[nomer - 1].EditWall(temp);
							break;
						case 0:
							f = false;
							break;
						}
					}
					break;
				case 2:
					f = true;
					while (f == true)
					{
						cout << "\t��������" << endl;
						cout << "1 - ����������" << endl << "2 - ��������" << endl
							<< "3 - ��������������" << endl << "0 - ���������" << endl;
						cin >> pr;
						switch (pr)
						{
						case 1:
							kol2++;
							w[kol2 - 1].AddClock();
							w[kol2 - 1].AddMechanical();
							w[kol2 - 1].AddWrist();
							break;
						case 2:
							cout << "\t������" << endl;
							for (int i = 0; i < kol2; i++)
							{
								w[i].ShowClock(i);
								w[i].ShowMechanical();
								w[i].ShowWrist();
							}
							break;
						case 3:
							cout << "\t������" << endl;
							for (int i = 0; i < kol2; i++)
							{
								w[i].ShowClock(i);
								w[i].ShowMechanical();
								w[i].ShowWrist();
							}
							cout << "������� ����� �����" << endl;
							cin >> nomer;
							cout << "\t����� ������ ��������?" << endl << "1 - �������������"
								<< endl << "2 - ��������" << endl << "3 - ���������" << endl;
							cout << "4 - ��� ����������" << endl << "5 - ������" << endl;
							cout << "6 - ��������� �������" << endl << "7 - ����������" << endl;
							cin >> temp;
							w[nomer - 1].EditClock(temp);
							w[nomer - 1].EditMechanical(temp);
							w[nomer - 1].EditWrist(temp);
							break;
						case 0:
							f = false;
							break;
						}
					}
					break;
				case 0:
					flag = false;
					break;
				}
			}
			break;
		case 2:
			cout << "\t����������� ����" << endl;
			f = true;
			while (f == true)
			{
				cout << "\t��������" << endl;
				cout << "1 - ����������" << endl << "2 - ��������" << endl
					<< "3 - ��������������" << endl << "0 - ���������" << endl;
				cin >> pr;
				switch (pr)
				{
				case 1:
					kol3++;
					e[kol3 - 1].AddClock();
					e[kol3 - 1].AddElectronic();
					break;
				case 2:
					cout << "\t������" << endl;
					for (int i = 0; i < kol3; i++)
					{
						e[i].ShowClock(i);
						e[i].ShowElectronic();
					}
					break;
				case 3:
					cout << "\t������" << endl;
					for (int i = 0; i < kol3; i++)
					{
						e[i].ShowClock(i);
						e[i].ShowElectronic();
					}
					cout << "������� ����� �����" << endl;
					cin >> nomer;
					cout << "\t����� ������ ��������?" << endl << "1 - �������������"
						<< endl << "2 - ��������" << endl << "3 - ���������" << endl;
					cout << "4 - ��� �����" << endl << "5 - ���������" << endl;
					cin >> temp;
					e[nomer - 1].EditClock(temp);
					e[nomer - 1].EditElectronic(temp);
					break;
				case 0:
					f = false;
					break;
				}
			}
			break;
		case 0:
			delete[]w;
			delete[]q;
			delete[]e;
			return 0;
		}
	}
	delete[]w;
	delete[]q;
	delete[]e;
}



#include "Wrist.h"
#include "Wall.h"
#include "Electronic.h"


using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	
	Wrist* w = new Wrist[N];

	cout << "\t�������� ����" << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> w[i];
		//w[i].input_wrist();
	}

	w[0].head_wrist();
	for (int i = 0; i < 3; i++)
	{
		cout << setw(3) << i + 1;
		cout << w[i];
		//w[i].view_wrist();
	}
	cout << endl;

	char buf[N];
	int buf1;
	bool buf2;

	int num, m;
	bool flag = true;

	cout << "������� ����� �����" << endl;
	cin >> m;

		cout << "\t����� ������ ��������?" << endl << "1 - �������������" << endl << "2 - ��������" << endl << "3 - ���������" << endl
			<< "4 - ��� ����������" << endl << "5 - ������" << endl << "6 - �������� �������" << endl << "7 - ����������" << endl;
		cin >> num;
		switch (num)
		{
		case 1:
			cin >> buf;
			w[m - 1].set_producer(buf);
			break;
		case 2:
			cin >> buf;
			w[m - 1].set_material(buf);
			break;
		case 3:
			cin >> buf1;
			w[m - 1].set_cost(buf1);
			break;
		case 4:
			cin >> buf;
			w[m - 1].set_face(buf);
			break;
		case 5:
			cin >> buf;
			w[m - 1].set_glass(buf);
			break;
		case 6:
			cin >> buf;
			w[m - 1].set_materialrem(buf);
			break;
		case 7:
			cin >> buf2;
			w[m - 1].set_water(buf2);
			break;
		}

		cout << endl;
	w[0].head_wrist();
	for (int i = 0; i < 3; i++)
	{
		cout << setw(3) << i + 1;
		w[i].view_wrist();
	}
	cout << endl;

	delete[]w;

	/*Wall* q = new Wall[N];
	Electronic* e = new Electronic[N];
	delete[]q;
	delete[]e;*/
	system("pause");

	return 0;
}
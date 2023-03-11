#include"header.h"

int main()
{
    setlocale(LC_ALL, ".UTF8");
    int num, nus, pr, kol1 = 0, kol2 = 0, kol3 = 0, nomer, temp;
    bool flag, f;
    Wrist* w = new Wrist[N];
    Wall* q = new Wall[N];
    Electronic* e = new Electronic[N];

    while (true)
    {
        cout << "\tЧасы" << endl << "1 - Механические" << endl << "2 - Электронные" << endl << "0 - Выход" << endl;
        cin >> num;
        switch (num)
        {
        case 1:
            flag = true;
            while (flag == true)
            {
                cout << "\tМеханические часы" << endl << "1 - Настенные" << endl << "2 - Наручные" << endl << "0 - Вернуться" << endl;
                cin >> nus;
                switch (nus)
                {
                case 1:
                    f = true;
                    while (f == true)
                    {
                        cout << "\tВыберите" << endl;
                        cout << "1 - Добавление" << endl << "2 - Просмотр" << endl
                            << "3 - Редактирование" << endl << "0 - Вернуться" << endl;
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
                            cout << "\tСписок" << endl;
                            for (int i = 0; i < kol1; i++)
                            {
                                q[i].ShowClock(i);
                                q[i].ShowMechanical();
                                q[i].ShowWall();
                            }
                            break;
                        case 3:
                            cout << "\tСписок" << endl;
                            for (int i = 0; i < kol1; i++)
                            {
                                q[i].ShowClock(i);
                                q[i].ShowMechanical();
                                q[i].ShowWall();
                            }
                            cout << "Введите номер часов" << endl;
                            cin >> nomer;
                            cout << "\tКакие данные изменить?" << endl << "1 - Производителя"
                                << endl << "2 - Материал" << endl << "3 - Стоисость" << endl;
                            cout << "4 - Тип циферблата" << endl << "5 - Стекло" << endl;
                            cout << "6 - Форма" << endl << "7 - Цена деления циферблата" << endl;
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
                        cout << "\tВыберите" << endl;
                        cout << "1 - Добавление" << endl << "2 - Просмотр" << endl
                            << "3 - Редактирование" << endl << "0 - Вернуться" << endl;
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
                            cout << "\tСписок" << endl;
                            for (int i = 0; i < kol2; i++)
                            {
                                w[i].ShowClock(i);
                                w[i].ShowMechanical();
                                w[i].ShowWrist();
                            }
                            break;
                        case 3:
                            cout << "\tСписок" << endl;
                            for (int i = 0; i < kol2; i++)
                            {
                                w[i].ShowClock(i);
                                w[i].ShowMechanical();
                                w[i].ShowWrist();
                            }
                            cout << "Введите номер часов" << endl;
                            cin >> nomer;
                            cout << "\tКакие данные изменить?" << endl << "1 - Производителя"
                                << endl << "2 - Материал" << endl << "3 - Стоисость" << endl;
                            cout << "4 - Тип циферблата" << endl << "5 - Стекло" << endl;
                            cout << "6 - Маатериал ремешка" << endl << "7 - Водозащита" << endl;
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
            cout << "\tЭлектронные часы" << endl;
            f = true;
            while (f == true)
            {
                cout << "\tВыберите" << endl;
                cout << "1 - Добавление" << endl << "2 - Просмотр" << endl
                    << "3 - Редактирование" << endl << "0 - Вернуться" << endl;
                cin >> pr;
                switch (pr)
                {
                case 1:
                    kol3++;
                    e[kol3 - 1].AddClock();
                    e[kol3 - 1].AddElectronic();
                    break;
                case 2:
                    cout << "\tСписок" << endl;
                    for (int i = 0; i < kol3; i++)
                    {
                        e[i].ShowClock(i);
                        e[i].ShowElectronic();
                    }
                    break;
                case 3:
                    cout << "\tСписок" << endl;
                    for (int i = 0; i < kol3; i++)
                    {
                        e[i].ShowClock(i);
                        e[i].ShowElectronic();
                    }
                    cout << "Введите номер часов" << endl;
                    cin >> nomer;
                    cout << "\tКакие данные изменить?" << endl << "1 - Производителя"
                        << endl << "2 - Материал" << endl << "3 - Стоисость" << endl;
                    cout << "4 - Тип часов" << endl << "5 - Платформа" << endl;
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

#include <iostream>
#include <string>

using namespace std;

int main2();
int main3();

int main()
{
    setlocale(LC_ALL, "Russian");


    //main2();Для отладки cpp файла Первая работа_2 часть. Во время отладки файла Первая работа 1_часть закоментировать.
    main3();//Для отладки cpp файла Вторая работа. Во время отладки файла Первая работа 1_часть закоментировать.

    //Первое

    int ar[10] = { 1,2,3,4,5,6,7,8,9,10 };

    for (int i = 0; i < 10; i++) {
        if (!(ar[i] % 2)) {
            ar[i] = 0;
        }
        cout << "ar[" << i << "]=" << ar[i] << endl;
    }

    //Второе

    string sim, stroka;

    do {
        cout << endl << "Введите символ:";
        getline(cin, sim);
    } while (sim.size() != 1);

    do {
        cout << endl << "Введите строку:";
        getline(cin, stroka);
    } while (stroka.size() <= 1);

    cout << "Символ <<" << sim << ">> находится на " << stroka.find(sim) + 1 << " месте." << endl;

    //Третье

    int ger[3][3];

    for (int i = 0; i < 3; i++) {
        for (int k = 0; k < 3; k++) {
            cout << "ger[" << i << "][" << k << "]=";
            cin >> ger[i][k];
        }
    }

    cout << "Определитель=" << ger[0][0] - ger[0][1] + ger[0][2] - ger[1][0] + ger[1][1] - ger[1][2] + ger[2][0] - ger[2][1] + ger[2][2] << endl;
}

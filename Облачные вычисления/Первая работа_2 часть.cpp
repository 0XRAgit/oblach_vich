#include <iostream>
#include <string>

using namespace std;

string szh(string stroka) {
    int i = 1, per, pos, sch = 0;
    char tranz;
    do {
        if (stroka[i] == stroka[i - 1]) {
			per = i - 1;
			pos = i;
			sch++;
			tranz = stroka[i];
			while (stroka[i] == tranz) {
				i++;
				pos = i;
				sch++;
			}
			for (int g = per; g < pos+1;g++) {
				stroka[g] = NULL;
			}
			stroka[per] = sch +'0';
			stroka[per+1] = tranz;
        }
		sch = 0;
		i++;
    } while (stroka[i] != '\0');

    return stroka;
}

int main2()
{

	string str;

	getline(cin, str);

	cout << szh(str);
	
	cin >> str;
	exit(0);
	return 1;
}

/*
Cоздайте функцию, котора€ организует простейшей сжатие вход€щей символьной строки произвольного масштаба. —жатие происходит по следующему принципу:
 если в строке есть последовательность повтор€ющихс€ символов, то она замен€етс€ на пару  код символа и количество его повтора в строчке. ќбеспечьте возможность ввода строки с клавиатуры. 
–еализуйте сортировку массива вставками.(массив из целых чисел). 
—оздайте программу, позвол€ющую находить в строке подстроку и замен€ть еЄ на другую произвольную подстроку в каждом месте обнаружени€. 
 */
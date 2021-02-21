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
	setlocale(LC_ALL, "Russian");

	//Первое. Для отладки первого - использовать цифры буквы.

	string str;

	getline(cin, str);

	cout << szh(str)<<endl;

	//Второе

	int mas[10] = {8,7,3,5,0,1,2,4,9,6},tranz;
	

	for (int i = 1; i < 10;i++) {
		for (int k = i; k >0;k--) {

			if (mas[k - 1] > mas[k]) {
				tranz = mas[k];
				mas[k] = mas[k - 1];
				mas[k - 1] = tranz;
			}
			else break;
		}
	}

	for (int i = 0; i < 10;i++) {
		cout << mas[i];
	}

	//Третье

	string stroka="Во дворе - много т&F, принеси мне тех душистых т&F.", podstroka="рав";

	cout <<endl << "Изначально: " << stroka << endl;

	while (stroka.find("&F")!=-1) {
		stroka.replace(stroka.find("&F"),podstroka.size(),podstroka);
	}

	cout << "Конечная: " << stroka<< endl;
	exit(0);
	return 1;
}

/*
Создайте программу, позволяющую находить в строке подстроку и заменять её на другую произвольную подстроку в каждом месте обнаружения. 
 */
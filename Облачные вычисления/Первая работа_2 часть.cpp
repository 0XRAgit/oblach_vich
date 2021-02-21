#include <iostream>
#include <string>

using namespace std;

string szh(string stroka) {
    int i = 1, per, pos, sch = 0;
    char tranz;
    do {
        if (stroka[i] == stroka[i - 1]) {
            tranz = stroka[i];
            per = i;
            sch = 1;
            pos = i;
            while (stroka[i] == tranz) {
                sch++;
                i++;
            }

            stroka[per] = tranz;
            stroka[pos] = (char)sch;
            for (per + 1; per < pos; per++) {
                stroka[i] = NULL;
            }


        }

        i++;
    } while (stroka[i] != '\0');

    return stroka;
}

int main2()
{

	string str;

	getline(cin, str);

	str.length();

	cout << szh(str);

	
	exit(0);
	return 1;
}

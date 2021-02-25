#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
#include <math.h>

using namespace std;

double min(double a, double b) {
	if (a>b) {
		return b;
	}
	else {
		return a;
	}
}

void chline(char sim, int i, int j) {
	for (int k=0; k < j; k++) {
		if (k>=i) {
			cout  << sim << setw(5);
		}
		else {
			cout  << k << setw(5);
		}
	}
	cout <<' '<< endl<<endl;//Вывод пустого символа нужен для очистки вывода от лишнего setw
}

void tret(char sim, int strok, int dlina) {
	for (int i = 0; i < strok;i++) {
		for (int k = 0; k < dlina;k++) {
			cout << sim<<setw(2);
		}
		cout <<' '<< endl;//Вывод пустого символа нужен для очистки вывода от лишнего setw
	}
	cout << endl<<endl;
}

void sred_garm(double per, double vtor) {
	cout << 2 / (1 / per + 1 / vtor) << endl<<endl;
}

void large_of(double *per, double *vtor) {
	if (per<vtor) {
		*vtor = *per;
	}
	else {
		*per = *vtor;
	}
}

void shest(double* per, double* vtor,double *tret) {
	double max, min, sred;
	if (*per>*vtor && *per>*tret) {
		max = *per;
	}
	else if(*vtor>*per && *vtor>*tret){
		max = *vtor;
	}
	else {
		max = *tret;
	}

	if (*per<*vtor && *per<*tret) {
		min = *per;
	}
	else if (*vtor<*per && *vtor<*tret) {
		min = *vtor;
	}
	else {
		min = *tret;
	}

	if ((*per==max && *vtor==min)||(*vtor==max && *per==min)) {
		sred = *tret;
	}
	else if ((*vtor==max && *tret==min)||(*tret==max && *vtor==min)) {
		sred = *per;
	}
	else {
		sred = *vtor;
	}

	*per = min;
	*vtor = sred;
	*tret = max;
}

double power(double chis, int step) {
	if (step!=0) {
		return pow(chis, step);
	}
	else {
		return 1;
	}
}

void to_base_n(int chis, int sist) {
	string otv;
	do {
		otv += to_string(chis % sist);
		chis /= sist;
	} while (chis!=0);
	reverse(otv.begin(), otv.end());
	cout << otv << endl<<endl;
}

void Fibonacci(int end) {
	vector <int> chisla;
	chisla.push_back(0);
	chisla.push_back(1);
	for (int i = 2; i < end;i++) {
		chisla.push_back(chisla[i-2]+chisla[i-1]);
	}
	for (int i = 2; i < end; i++) {
		cout<<chisla[i]<<setw(4);
	}
}

int main3()
{
	setlocale(LC_ALL, "Russian");

	//Первое задание
	cout << min(5.2,6.4)<<endl<<endl;

	//Второе задание
	chline('F',3,10);

	//Третье задание
	tret('~',3,10);

	//Четвёртое задание
	sred_garm(1.5, 2.5);

	//Пятое задание
	double* a = new double , * b = new double;
	*a = 1.675; *b = 2.125;
	large_of(a,b);
	cout << "a=" << *a << setw(3) << "b=" << *b << endl<<endl;

	//Шестое задание
	double* al = new double, * bl = new double, * cl = new double;
	*al = 2.3; *bl = 6.7; *cl = 1.2;
	shest(al,bl,cl);
	cout << "a=" << *al << setw(3) << "b=" << *bl << setw(3) << "c=" << *cl << endl<<endl;

	//Седьмое задание
	vector <char> text;
	char sim;
	int i = 0;

	ofstream file_sozd("Облачные вычисления.txt");
	file_sozd<<( "AbcIugn 675 i tutu. ~/*[] abc");
	file_sozd.close();

	ifstream file("Облачные вычисления.txt");
	for (file >> sim; !file.eof(); file >> sim) {
		text.push_back(sim);
		cout << text[i];
		if (isupper(text[i])) {
			cout << "-" << (int)text[i] - 64 << endl;
		}
		else if(islower(text[i])) {
			cout << "-" << (int)text[i] - 96 << endl;
		}
		else {
			cout << "-" <<"не буква" << endl;
		}
		i++;
	}

	//Восьмое задание
	cout<<endl<<endl<<"3^2="<<power(3,2)<<setw(10)<<"3^-2="<<power(3,-2)<<setw(10)<<"87^0="<<power(87,0)<<endl<<endl;

	//Девятое задание
	//Так и не понял, где там можно использовать рекурсию

	//Десятое задание
	to_base_n(129,8);

	//Одиннадцатое задание
	Fibonacci(15);

	exit(0);
}
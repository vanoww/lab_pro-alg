#include <iostream>
#include <clocale>
#include <iomanip>
using namespace std; // подключение пространства имен std
int main() {
	setlocale(LC_ALL, "Russian");// для поддержки русского языка
	int leg1,leg2; // обьявление переменных
	double hypotenuse;
	cout << "Средний уровень. Вычисление гипотенузы по двум катетам\n";
	cout << "Введите вервый катет\n";
	cin >> leg1;         //ввод первого катета
	if (cin.fail()) {                   // проверка ввода
		cout << "вы ввели не число!\n";
		return 1;
	}
	cout << "Введите второй катет\n";
	cin >> leg2;         //ввод второго катета
	if (cin.fail()) {                   // проверка ввода
		cout << "вы ввели не число!\n";
		return 1;
	}
	hypotenuse = sqrt(static_cast<double>(leg1 * leg1 + leg2 * leg2));// вычисление гипотенузы
	cout << fixed << setprecision(2) << "Гипотенуза = " << hypotenuse;// fixed - точное форматирование, setprecision - кол знаков после запятой
	

	return 0;
}

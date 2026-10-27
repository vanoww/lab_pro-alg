#include <iostream>
#include <clocale>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");// для поддержания русского языка
	cout << "Базовый уровень. выбор фигуры\n";
	int number;                   // обьявление переменной
	cout << "Введите число от 1 до 3:";
	cin >> number;                  // ввод числа
	switch (number) {
		case 1:                                   // если число равно 1
			cout << "Ваша фигура: круг";
			break;
		case 2:                                // если число равно 2
			cout << "Ваша фигура: квадрат";
			break;
		case 3:                                 // если число равно 3
			cout << "Ваша фигура: треугольник";
			break;
		default: cout << "Вы ввели неверное число";  // если не подошло ничего
			break;
	}

	return 0;
}

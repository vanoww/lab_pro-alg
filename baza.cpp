#include <iostream>
#include <clocale>
using namespace std; // подключение пространства имен std
int main() {
	setlocale(LC_ALL, "Russian");// для поддержания русского языка
	double number1, number2, average; // обьявление переменных
	cout << "Базовый уровень. Среднее арифметическое двух чисел\n";
	cout << "Введите первое число\n";
	cin >> number1;           
	if (cin.fail()) {                   // проверка ввода
		cout << "вы ввели не число!\n";
		return 1;
	}
	cout << "введите второе число\n";
	cin >> number2;
	if (cin.fail()) {
		cout << "Вы ввели не число!\n";// проверка ввода
			return 1;
	}
	average = (number1 + number2) / 2.0;// нахождение среднего  арифметического
		cout << "Среднее арифметическое = " << average; // вывод результата
	
	return 0;
}
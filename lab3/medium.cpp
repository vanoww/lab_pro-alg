#include <iostream>
#include <clocale>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");// для поддержания русского языка
    cout << "Простой калькулятор\n ";
    double num1, num2;
    char oper;                             //обьявление переменных
    cout << "Введите первое число, операцию и второе число:\n ";
    cin >> num1;
    if (cin.fail()) {                   // проверка ввода
        cout << "вы ввели не число!\n";
        return 1;
    }
    cin >> oper;
    cin >> num2;
    if (cin.fail()) {                   // проверка ввода
        cout << "вы ввели не число!\n";
        return 1;
    }
    if (oper == '+') {
        cout << "Результат: " << num1 + num2;
    }
    else if (oper == '-') {
        cout << "Результат: " << num1 - num2;
    }
    else if (oper == '*') {
        cout << "Результат: " << num1 * num2;
    }
    else if (oper == '/') {
        if (num2 == 0) {                                    // проверка деления на ноль
            cout << "Ошибка: деление на ноль невозможно!";
        }
        else {
            cout << "Результат: " << num1 / num2;
        }
    }
    else {
        cout << "Ошибка: неизвестная операция!" <<; //  не одна из операций не подошла
    }
	return 0;
}

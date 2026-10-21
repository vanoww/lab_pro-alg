#include <iostream>
#include <clocale>
#include <bitset>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");// для поддержания русского языка
    cout << "Конвертер систем исчисления\n";
    int number, base;                       // обьявление переменных
    cout << "Введите число от 0 до 255: \n";
    cin >> number;
    if (number < 0 || number > 255) {
        cout << "Ошибка: число вне диапазона [0, 255]!"; // число не входит в диапозон
        return 1;
    }
    cout << "Выберите систему счисления (2, 8, 10, 16): \n";
    cin >> base;
    if (base == 2) {
        cout << "Результат: " <<bitset<8>(number);
    }
    else if (base == 8) {
        cout << "Результат: " << oct << number;
    }
    else if (base == 10) {
        cout << "Результат: " << dec << number;
    }
    else if (base == 16) {
        cout << "Результат: " <<uppercase << hex << number;
    }
    else {
        cout << "Ошибка: неподдерживаемая система счисления!"; // не подощла система исчисления
    }
	return 0;
}
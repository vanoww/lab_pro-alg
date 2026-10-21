#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");// для поддержания русского языка
	cout << "Проверка числа на трехзначность:\n";
	int number;                        // обьявление перменной
	cout << "Введите число:";
	cin >> number;                      //Ввод числа
	if (cin.fail()) {                   // проверка ввода
		cout << "вы ввели не число!\n";
		return 1;
	}
	int absnumber = abs(number);       //использование модуля для корректности работы программы 
	if (absnumber > 99 && absnumber < 1000) {   // условие 
		cout << "Ваше число трехзначное";       //вывод если условие выполнилось 
	}
	else {                                     
		cout << "Ваше число не трехзначное";    // вывод если условие не выполниось
	}

	return 0;
}
#include <iostream>
#include <clocale>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");// для поддержания русского языка
	cout << "Средний уровень. перевод едениц измерения\n";
	int number;  // обьявление переменной
	double value, result;
	cout << "выберите еденицы измерения от 1 до 3\n";
    cout << "где 1-Дюймы в сантиметры, 2-Футы в метры, 3-Мили в километры:";
	cin >> number;  // ввод числа
	cout << "Введите число: ";
	cin >> value;
	switch (number) {
        case 1:                                         //если выбрали 1
            result = value * 2.54;
            cout << value << " дюйм = " << result << " см";  
            break;
        case 2:                                         //если выбрали 2
            result = value * 0.3048; 
            cout << value << " фут = " << result << " м";
            break;
        case 3:                                            //если выбрали 3
            result = value * 1.60934; 
            cout << value << " миль = " << result << " км";
            break;
        default:                                            //если ничего не подошло
            cout << "неверный код едениц измерения";
            break;
    }
	return 0;
}

#include <iostream>
#include <clocale>
#include <cmath> // Для функции std::abs()
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");       // для поддержки русского языка
    double start, finish, step;            // обьявление переменных
    cout << "Базовый уровень. Вариант 6\n";
    cout << "Введите начало интервала a: ";   // вывод
    cin >> start;                             // ввод
    cout << "Введите конец интервала b: ";
    cin >> finish;
    cout << "Введите шаг h: ";
    cin >> step;
    if (start > finish || step <= 0) {                   // проверка условий ввода
        cout << "Ошибка. Начало интервало длжно быть меньше конца, а шаг > 0\n";
        return 1;
    }
    const double EPSILON = 1e-9;                 // для точности сравнения 
    for (double x = start; x <= finish + EPSILON; x += step) {
        double y = abs(x);                    // вычисление модуля
        cout << "При x = " << x << "   " << "y = " << y << endl;
    }
    return 0;
}
#include <iostream>
#include <clocale>
#include <cmath> // для тригонометрии
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    double a, b;
    cout << "Повышенный уровень. Вариант 6: Автоподбор шага\n"; // вывод
    cout << "Введите начало интервала a: ";
    cin >> a;                                                  //ввод
    cout << "Введите конец интервала b: ";
    cin >> b;
    if (a > b) {                                 // проверка условий интервала
        cout << "Ошибка! Начало a не может быть больше конца b.\n";
        return 1;
    }
    if (a == b) {                 // если a = b то тольео одна точка
        double y = a * sin(a);
        cout << a << "     " << y << endl;
        return 0;
    }
    double h = (b - a) / 19.0;                // получаем 20 шагов
    cout << "Подобранный шаг h = " << h << "\n";

    for (double x = a; x <= b + 1e-9; x += h) {
        double y = x * sin(x);
        cout << x << "    " << y << endl;
    }

    return 0;
}
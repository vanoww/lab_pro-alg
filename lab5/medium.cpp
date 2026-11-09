#include <iostream>
#include <clocale>
#include <cmath> // для тригонометрии
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");     // для поддержания русского языка
    double a, b, h;

    cout << "Средний уровень. Вариант 6\n";
    cout << "Введите a, b и шаг h: ";    //вывод
    cin >> a >> b >> h;                  //ввод

    if (a > b || h <= 0) {             // проверка условий диапазона
        cout << "Ошибка! условие a <= b и h > 0.\n";
        return 1;
    }

    double sum = 0;

    for (double x = a; x <= b + 1e-9; x += h) {           // проверка разрыва
        if (abs(cos(x)) < 1e-7) {
            cout << x << "    разрыв" << endl;
            continue;                  // пропускаем если разрыв
        }
        double y = tan(x);
        cout << x << "     " << y << endl;
        if (y > 0) {
            sum += y;       // добавляем в сумму положительные значения 
        }
    }
    cout << "Сумма положительных значений: " << sum << endl;

    return 0;
}

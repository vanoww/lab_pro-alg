#include <iostream>
#include <clocale>
#include <iomanip>
using namespace std; // подключение пространства имен std
int main() {
	setlocale(LC_ALL, "Russian");// для поддержки русского языка
	const double PI = 3.14159265358979323846;// константа числа пи типа double
	const float PI_F = 3.14159265f;          // константа числа пи типа float
	double degree_measure = 0.0, radians_measure = 0.0, degreesBack = 0.0;
	cout << "Повышенный уровень. Перевод угла из градусов в радианы и обратно\n";
	cout << "Введите величину угла в градусах\n ";
	cin >> degree_measure;
	if (cin.fail()) {                   // проверка ввода
		cout << "вы ввели не число!\n";
		return 1;
	}
	radians_measure = degree_measure * PI / 180.0;//вычисления в типе double 
	degreesBack = radians_measure * 180.0 / PI;
	float degres_measure_float = static_cast<float>(degree_measure); //вычисления в типе float
	float radians_measure_float = degres_measure_float * PI_F / 180.0f;
	double difference = radians_measure - static_cast<double>(radians_measure_float);// демонастрация потери точности разных типов
	int implicitInt = radians_measure; // неявное приведение 
	cout << fixed << setprecision(9);// настройка точности вывода
	cout << "Исходный угол: " << degree_measure << " градусов\n";
	cout << "В радианах : " << radians_measure << "\n";// тип double
	cout << "Перевод обратно в градусы: " << degreesBack << "\n";
	cout << "Результат в типе double: " << radians_measure << "\n";
	cout << "Результат в типе float : " << radians_measure_float << "\n";// тип float
	cout << "Разность : " << difference << "\n";// разность между double и float
	cout << "Значение double: " << radians_measure << "\n";
	cout << "Значение после неявного приведения в int: " << implicitInt << "\n";//демонстрация потери точности
	return 0;
}

#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	//добавляем переменные
	int h1, m1, s1; 
	int h2, m2, s2;

	cout << "Введите часы первого момента времени: ";
	cin >> h1;
	cout << "Введите минуты первого момента времени: ";
	cin >> m1;
	cout << "Введите секунды первого момента времени: ";
	cin >> s1;

	cout << "Введите часы второго момента времени: ";
	cin >> h2;
	cout << "Введите минуты второго момента времени: ";
	cin >> m2;
	cout << "Введите секунды второго момента времени: ";
	cin >> s2;

	// Переводим время в секунды
	int total_seconds1 = h1 * 3600 + m1 * 60 + s1;
	int total_seconds2 = h2 * 3600 + m2 * 60 + s2;

	// Вычисляем разницу
	int difference = total_seconds2 - total_seconds1;

	cout << "Разница во времени: " << difference << " секунд" << endl;

	return 0;
}

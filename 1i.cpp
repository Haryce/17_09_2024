#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int N, K; // Количество белок и орехов

	// Ввод данных
	cout << "Введите количество белок (N): ";
	cin >> N;
	cout << "Введите количество орехов (K): ";
	cin >> K;

	// Вычисление остатка
	int ost = K % N;

	// Вывод результата
	cout << "Останется " << ost << " орехов." << endl;

	return 0;
}

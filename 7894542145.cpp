#include <iostream>
#include <ctime>
using namespace std;
int main() {
//	1. Задан массив A, содержащий 10 целых случайных чисел от 0 до 20. Найти произведение элементов этого массива.
	/*const int n =10;
	int a[n];
	int pr = 1;
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 21;
			cout << a[i] << " ";
	}
	for (int i = 0; i < n; i++) {
		pr = pr * a[i];
	}
	cout << pr;*/
	//2. Задан массив, который содержит 8 случайных целых чисел от - 10 до 10. Найти сумму положительных элементов массива.
	/*const int n = 8;
	int mass[n];
	int s = 0  ;
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		mass[i] = rand() % 21-10;
		cout << mass[i] << " ";
	}
	for (int i = 0; i < n; i++) {
		if (mass[ i]  > 0)
		s = s + mass[i];
	}
	cout << s;*/
	//3. Задан массив, который содержит 16 случайных целых чисел от 0 до 20. Найти количество элементов массива, которые делятся на 3 и на 5.
	/*const int n = 16;
	int mass[n];
	int k = 0;
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		mass[i] = rand() % 21;
		cout << mass[i] << " ";
	}
	for (int i = 0; i < n; i++) {
		if (mass[i] % 3 == 0 && mass[i] % 5 == 0) {
			k = k + 1;
		}
		
	}
	cout << k;*/
	//4. Задан массив из 9 целых чисел  от - 10 до 10. Найти сумму элементов массива, которые являются четными числами
	/*const int n = 9;
	int mass[n];
	int s = 0;
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		mass[i] = rand() % 21 - 10;
		cout << mass[i] << " ";
	}
	for (int i = 0; i < n; i++) {
		if (mass[i] %2== 0)
			s = s + mass[i];
	}
	cout << s;*/
}
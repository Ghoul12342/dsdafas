#include <iostream>
#include <ctime>
using namespace std;
int main() {
//	1. ����� ������ A, ���������� 10 ����� ��������� ����� �� 0 �� 20. ����� ������������ ��������� ����� �������.
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
	//2. ����� ������, ������� �������� 8 ��������� ����� ����� �� - 10 �� 10. ����� ����� ������������� ��������� �������.
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
	//3. ����� ������, ������� �������� 16 ��������� ����� ����� �� 0 �� 20. ����� ���������� ��������� �������, ������� ������� �� 3 � �� 5.
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
	//4. ����� ������ �� 9 ����� �����  �� - 10 �� 10. ����� ����� ��������� �������, ������� �������� ������� �������
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
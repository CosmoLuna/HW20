#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void showArr(int array[], int length) {
	cout << "������:\n[";
	for (int i = 0; i < length; i++)
		cout << array[i] << ", ";
	cout << "\b\b]\n";
}
int searchIndex(int array[], int length, int index, int begin = 0) {
	for (int i = begin; i < length; i++)
		if (array[i] == index)
			return i;
	return -1;
}
int searchLastIndex(int array[], int length, int index, int begin = 0) {
	for (int i = length - 1; i > 0; i--)
		if (array[i] == index)
			return i;
	return -1;
}
int maxElement(int array[], int length) {
	int max = array[0];
	for (int i = 0; i < length; i++)
		if (array[i] > max)
			max = array[i];
	return max;
}
int minElement(int array[], int length) {
	int min = array[0];
	for (int i = 0; i < length; i++)
		if (array[i] < min)
			min = array[i];
	return min;
}
int meanValue(int array[], int length) {
	int sum = 0;
	for (int i = 0; i < length; i++)
		sum += array[i];
	return sum / length;
}
void range(int array[], int length, int num1, int num2) {
	cout << "[";
	for (int i = 0; i < length; i++)
		if (array[i] > num1 && array[i] < num2)
			cout << array[i] << ", ";
	cout << "\b\b]\n";
}
int counter(int array[], int length, int key) {
	int counter = 0;
	for (int i = 0; i < length; i++)
		if (array[i] == key)
			counter++;
	return counter;
}


int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int array[100];
	for (int i = 0; i < 100; i++)
		array[i] = rand() % (101 + 100) - 100;

	showArr(array, 100);

	int n, m;
	cout << "������� �������� �������� �������: ";
	cin >> n;
	cout << "������ ������� ��������� �������� � ������: " << searchIndex(array, 100, n) << endl;

	cout << "������� �������� �������� �������: ";
	cin >> n;
	cout << "������ ���������� ��������� �������� � ������: " << searchLastIndex(array, 100, n) << endl;

	cout << "������������ ������� �������: " << maxElement(array, 100) << endl;
	cout << "����������� ������� �������: " << minElement(array, 100) << endl;

	cout << "������� ��������������: " << meanValue(array, 100) << endl;

	cout << "������� ��������: ";
	cin >> n >> m;
	range(array, 100, n, m);

	cout << "������� ������� �������: ";
	cin >> n;
	cout << "���������� ��������� �������� " << n << " � ������ = " << counter(array, 100, n) << endl;

	return 0;
}
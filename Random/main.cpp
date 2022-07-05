#include<iostream>
using namespace std;
#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 15;
	int arr[n];
	//Заполнение массива случайными числами:
	int minrand, maxrand;
	do
	{
		cout << "Введите минимальное случайное число"; cin >> minrand;
		cout << "Введите максимальное случайное число"; cin >> maxrand;
		if (minrand >= maxrand)cout << "Error: значения некорректны,попробуйте ещё раз";
	} while (minrand>=maxrand);
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxrand - minrand) + minrand;
	}

	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
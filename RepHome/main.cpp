#include<iostream>
using namespace std;
#define tab "\t"
void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n]{};

	//Заполняем массив случайными числами:

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 5;
	}
	//Выводим массив на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	//Перебираем массив
	for (int i = 0; i < n; i++)
	{
		bool never_before =true;//Предполагаем, что текущее значение ранее не встречалось в этом массиве
		//но это нужно проверить:
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				never_before = false;
				break;
			}
		}
		if (never_before)
		{
			int counter = 0;//Счётчик повторений
			for (int j = i + 1; j < n; j++)
			{
				if (arr[i] == arr[j])//выбранный элемент совпал с перебираемым элементом
				{
					counter++;
				}
			}
			if (counter > 0)cout << arr[i] << " Повторяется " << counter << " раз " << "\n";
		}
	}
	cout << endl;
}
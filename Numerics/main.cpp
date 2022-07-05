#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	int decimal;//
	cout << "¬ведите дес€тичное число :"; cin >> decimal;
	const int MAX_SIZE = 32;//int-4 Bytes=32 bit
	bool bin[MAX_SIZE] = {};//Ётот массив будет хранить разр€ды двоичного числа

	int i = 0;//—чЄтчик разр€дов
	while (decimal)
	{
		bin[i] = decimal % 2;//получаем младший разр€д двоичного числа

		decimal /= 2;//убираем полученный разр€д двоичного числа

		i++;
	}

	for (--i; i >= 0; i--)
	{
		cout << bin[i];
		if (i % 8 == 0)cout << " ";
		if (i % 4 == 0)cout << " ";
	}
	cout << endl;
}
#include<iostream>
using namespace std;
#define tab "\t"
//#define DEC_TO_BIN

void main()
{
	setlocale(LC_ALL, "");

#ifdef DEC_TO_BIN
	int DEC;
	cout << "Введите десятичное число :"; cin >> DEC;
	const int MAX_SIZE = 32;
	bool BIN[MAX_SIZE] = {};
	int i = 0;
	for (; DEC; i++, DEC /= 2)
	{
		BIN[i] = DEC % 2;

	}
	for (i--; i >= 0; i--)
	{
		cout << BIN[i];
	}
	cout << endl;

#endif // DEC_TO_BIN
	int dec;
	cout << "Введите десятичное число:"; cin >> dec;
	const int n = 8;
	int hex[n] = {};
	int i = 0;
	for (; dec; i++)
	{
		hex[i] = dec % 16;
		dec /= 16;

	}
	cout << "0x";
	for (--i; i >= 0; i--)
	{
		switch (hex[i])
		{
		case 10:cout << "A"; break;
		case 11:cout << "B"; break;
		case 12:cout << "C"; break;
		case 13:cout << "D"; break;
		case 14:cout << "E"; break;
		case 15:cout << "F"; break;
		default:cout << hex[i];
		}
		
	}
	cout << endl;
}
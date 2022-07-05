#include<iostream>
using namespace std;
#define tab "\t"
//#define BASICS

void main()
{
	setlocale(LC_ALL, "");
#ifdef BASICS
	const int ROWS = 8;
	const int COLS = 5;
	int arr[ROWS][COLS]
	{
		{ 1, 2, 3 },
		{ 4, 5, 6 },
		{ 7, 8, 9 },
	};
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;

		}
		cout << endl;
	}
#endif // BASICS
	const int ROWS = 3;
	const int COLS = 3;
	int A[ROWS][COLS];
	int B[ROWS][COLS];
	//Выводим матрицы на экран
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << A[i][j] << tab;
		}
		cout << endl;
	}
	cout << "\n------------------------\n";
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << B[i][j]<<tab;
		}
		cout << endl;
	}
	//При сложении двух матриц А и В мы получаем третью матрицу С ,
//каждый элемент которойявляется суммой соответствующих
//элементов слагаемых матриц.
	int C[ROWS][COLS]{};

}

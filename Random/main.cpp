#include<iostream>
using namespace std;
#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 15;
	int arr[n];
	//���������� ������� ���������� �������:
	int minrand, maxrand;
	do
	{
		cout << "������� ����������� ��������� �����"; cin >> minrand;
		cout << "������� ������������ ��������� �����"; cin >> maxrand;
		if (minrand >= maxrand)cout << "Error: �������� �����������,���������� ��� ���";
	} while (minrand>=maxrand);
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxrand - minrand) + minrand;
	}

	//����� ������� �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
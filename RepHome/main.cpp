#include<iostream>
using namespace std;
#define tab "\t"
void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n]{};

	//��������� ������ ���������� �������:

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 5;
	}
	//������� ������ �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	//���������� ������
	for (int i = 0; i < n; i++)
	{
		bool never_before =true;//������������, ��� ������� �������� ����� �� ����������� � ���� �������
		//�� ��� ����� ���������:
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
			int counter = 0;//������� ����������
			for (int j = i + 1; j < n; j++)
			{
				if (arr[i] == arr[j])//��������� ������� ������ � ������������ ���������
				{
					counter++;
				}
			}
			if (counter > 0)cout << arr[i] << " ����������� " << counter << " ��� " << "\n";
		}
	}
	cout << endl;
}
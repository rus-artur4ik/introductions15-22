#include "pch.h"
#include <iostream>
#include <Math.h>
#include <windows.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	float x, y, sum, raz;
	int menu, a, b, c, i, j;
	float br[5];
	float *arr, *brr, *crr;
	int *drr;
	char ch = ' ';
	while (true) {
		cout << "Введите номер задания (1-5): ";
		cin >> menu;
		switch (menu)
		{
		case 1:
		{
			cout << "Введите размер массива N: ";
			cin >> a;
			arr = new float[a];
			brr = new float[a];
			crr = new float[a];
			cout << "Заполните первый массив размерностью N: ";
			for (i = 0; i < a; i++)
			{
				cin >> arr[i];
			}
			cout << "Заполните второй массив размерностью N: ";
			for (i = 0; i < a; i++)
			{
				cin >> brr[i];
			}
			for (i = 0; i < a; i++)
			{
				crr[i] = arr[i];
				arr[i] = brr[i];
				brr[i] = crr[i];
			}
			cout << "Преобразованный массив A:" << endl;
			for (i = 0; i < a; i++)
			{
				cout << i + 1 << ": " << arr[i] << "." << endl;
			}
			cout << "Преобразованный массив B:" << endl;
			for (i = 0; i < a; i++)
			{
				cout << i + 1 << ": " << brr[i] << "." << endl;
			}
		} break;

		case 2:
		{
			cout << "Введите размер массива N и заполните его: ";
			cin >> a;
			arr = new float[a];
			brr = new float[a];
			for (i = 0; i < a; i++)
			{
				cin >> arr[i];
				brr[i] = 0;
			}
			brr[0] = arr[0];
			for (i = 1; i < a; i++)
			{
				for (j = 0; j <= i; j++) brr[i] += arr[j];
				brr[i] = brr[i] / (i + 1);
			}
			cout << "Массив B:" << endl;
			for (i = 0; i < a; i++)
			{
				cout << i + 1 << ": " << brr[i] << "." << endl;
			}
		} break;

		case 3:
		{
			sum = 0;
			c = 0;
			cout << "Введите размер целочисленного массива N и заполните его: ";
			cin >> a;
			drr = new int[a];
			for (i = 0; i < a; i++)
			{
				cin >> drr[i];
				if (drr[i] % 2 != 0) sum = drr[i]; 
			}
			cout << "Изменённый массив: " << endl;
			for (i = 0; i < a; i++)
			{
				if (drr[i] % 2 != 0) drr[i] += sum;
				cout << i + 1 << ": " << drr[i] << "." << endl;
			}

		} break;

		case 4:
		{
			cout << "Введите размер массива N и заполните его: ";
			cin >> a;
			sum = -99999;
			raz = 99999;
			x = 0;
			y = 0;
			arr = new float[a];
			for (i = 0; i < a; i++)
			{
				cin >> arr[i];
				if (arr[i] > sum) 
				{
					sum = arr[i];
					x = i;
				}
				if (arr[i] < raz)
				{
					raz = arr[i];
					y = i;
				}
			}
			if (x < y)
			for (i = x+1; i < y; i++)
			{
				arr[i] = 0;
			}
			else if (x > y)
			for (i = y + 1; i < x; i++)
			{
				arr[i] = 0;
			}
			cout << "Преобразованный массив:" << endl;
			for (i = 0; i < a; i++)
			{
				cout << i + 1 << ": " << arr[i] << "." << endl;
			}
		} break;

		case 5:
		{
			cout << "Введите размер массива N и заполните его, упорядочив по возрастанию элементы 2-N: ";
			cin >> a;
			sum = 0;
			arr = new float[a];
			for (i = 0; i < a; i++)
			{
				cin >> arr[i];
			}
			for (i = 0; i < a-1; i++)
			{
				if (arr[i] > arr[i+1])
				{
					sum = arr[i];
					arr[i] = arr[i + 1];
					arr[i + 1] = sum;
				}
			}
			cout << "Преобразованный массив:" << endl;
			for (i = 0; i < a; i++)
			{
				cout << i + 1 << ": " << arr[i] << "." << endl;
			}
		} break;
		}
	}
}


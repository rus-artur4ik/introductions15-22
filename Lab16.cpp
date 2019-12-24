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
	int menu, a, b, c, i, j, m, z, min, max;
	float *arr, *brr, *crr;
	int *drr, *grr;
	while (true) {
		cout << "Введите номер задания (1-5): ";
		cin >> menu;
		switch (menu)
		{
		case 1:
		{
			cout << "Введите размер массива N и заполните его: ";
			cin >> a;
			b = 0;
			drr = new int[a];
			for (i = 0; i < a; i++)
			{
				cin >> drr[i];
			}
			for (i = 0; i < a; i++) 
			{
				if (drr[b] != drr[i])
				{
					b++;
					drr[b] = drr[i];
				}
			}
			cout << "Преобразованный массив A:" << endl;
			for (i = 0; i <= b; i++)
			{
				cout << i + 1 << ": " << drr[i] << "." << endl;
			}
		} break;

		case 2:
		{
			cout << "Введите размер массива N и заполните его: ";
			cin >> a;
			m = 0;
			drr = new int[a];
			for (i = 0; i < a; i++)
			{
				cin >> drr[i];
			}
			for (i = 0; i < a-m; i++)
			{
				b = 0;
				for (j = 0; j < a; j++)
				{
					if (drr[i] == drr[j]) b++;
				}
				if (b == 2)
				{
					m++;
					for (j = i; j < a - 1; j++)
					{
						c = drr[j + 1];
						drr[j + 1] = drr[j];
						drr[j] = c;
					}
					i--;
				}
			}
			cout << "Преобразованный массив:"  << endl;
			for (i = 0; i < a-m; i++)
			{
				cout << i + 1 << ": " << drr[i] << "." << endl;
			}
		} break;

		case 3:
		{
			cout << "Введите размер массива N и заполните его: ";
			cin >> a;
			m = 0;
			min = 99999;
			max = -99999;
			grr = new int[a + 2];
			drr = new int[a];
			for (i = 0; i < a; i++)
			{
				cin >> drr[i];
			}
			for (i = 0; i < a; i++)
			{
				if (drr[i] < min) min = drr[i];
				if (drr[i] > max) max = drr[i];
			}
			for (i = 0; i < a; i++)
			{
				if (drr[i] == max)
				{
					grr[i + m] = drr[i];
					grr[i + m + 1] = 0;
					max++;
					m++;
				}
				else if (drr[i] == min)
				{
					grr[i + m] = 0;
					grr[i + m + 1] = drr[i];
					min--;
					m++;
				}
				else grr[i + m] = drr[i];
			}
			cout << "Преобразованный массив:" << endl;
			for (i = 0; i < a + 2; i++)
			{
				cout << i + 1 << ": " << grr[i] << "." << endl;
			}
		} break;

		case 4:
		{
			cout << "Введите размер массива N и заполните его: ";
			cin >> a;
			m = 0;
			z = 0;
			min = 99999;
			drr = new int[a];
			for (i = 0; i < a; i++)
			{
				cin >> drr[i];
				if (drr[i] < 0) z++;
			}
			grr = new int[a + z];
			for (i = 0; i < a; i++)
			{
				if (drr[i] < 0)
				{
					grr[i + m] = drr[i];
					grr[i + m + 1] = 0;
					m++;
				}
				else grr[i + m] = drr[i];
			}
			cout << "Преобразованный массив:" << endl;
			for (i = 0; i < a + m; i++)
			{
				cout << i + 1 << ": " << grr[i] << "." << endl;
			}
		} break;

		case 5:
		{
			cout << "Введите размер массива N и заполните его: ";
			cin >> a;
			m = 0;
			z = 0;
			max = -99999;
			drr = new int[a];
			for (i = 0; i < a; i++)
			{
				cin >> drr[i];
				if (drr[i] > 0) z++;
			}
			grr = new int[a + z];
			for (i = 0; i < a; i++)
			{
				if (drr[i] > 0)
				{
					grr[i + m] = 0;
					grr[i + m + 1] = drr[i];
					m++;
				}
				else grr[i + m] = drr[i];
			}
			cout << "Преобразованный массив:" << endl;
			for (i = 0; i < a + m; i++)
			{
				cout << i + 1 << ": " << grr[i] << "." << endl;
			}
		} break;
		}
	}
}

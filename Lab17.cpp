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
	int menu, a, b, c, d, i, j, k, m, z, min, max;
	float *arr, *brr, *crr;
	int *drr, *grr, *hrr, *urr;
	while (true) {
		cout << "Введите номер задания (1-5): ";
		cin >> menu;
		switch (menu)
		{
		case 1:
		{
			cout << "Введите размер массива N и заполните его: ";
			cin >> a;
			m = 0;
			drr = new int[a];
			grr = new int[a];
			hrr = new int[a];
			for (i = 0; i < a; i++)
			{
				cin >> drr[i];
			}
			b = 0;
			grr[b] = 1;
			hrr[b] = drr[b];
			for (i = 1; i < a; i++)
			{
				if (drr[i - 1] == drr[i]) grr[b] += 1;
				else
				{
					b++;
					grr[b] = 1;
					hrr[b] = drr[i];
				}
			}
			cout << "Результат:" << endl;
			for (i = 0; i <= b; i++)
			{
				cout << grr[i] << " раз(а) по " << hrr[i] << "." << endl;
			}
		} break;

		case 2:
		{
			cout << "Введите размер массива N и заполните его: ";
			cin >> a;
			drr = new int[a];
			grr = new int[a];
			for (i = 0; i < a; i++)
			{
				cin >> drr[i];
			}
			cout << "Введите L (L > 0):";
			cin >> max;
			m = a;
			b = 1;
			c = 0;
			for (i = 1; i < a; i++)
			{
				if (drr[i - 1] == drr[i]) b++;
				else if (b > max)
				{
					grr[c] = 0;
					c++;
					m = m - b + 1;
					b = 1;
				}
				else 
				{
					for (j = c; j < b + c; j++) grr[j] = drr[i - 1];
					c += b;
					b = 1;
				}
				if (i == a - 1)
				{
					if (b > max)
					{
						grr[c] = 0;
						c++;
						m = m - b + 1;
						b = 1;

					}
					else
					{
						for (j = c; j < b + c; j++) grr[j] = drr[i];
						c += b;
						b = 1;
					}
				}
			}
			cout << "Преобразованный массив:" << endl;
			for (i = 0; i < m; i++)
			{
				cout << i + 1 << ": " << grr[i] << "." << endl;
			}

		} break;

		case 3:
		{
			cout << "Введите размер массива N и заполните его: ";
			cin >> a;
			drr = new int[a];
			grr = new int[a];
			for (i = 0; i < a; i++)
			{
				cin >> drr[i];
			}
			cout << "Введите K:";
			cin >> max;
			m = 1;
			b = 0;
			z = (max == 1 ? 1 : 0);
			j = -1;
			for (i = 1; i < a; i++) {
				if (drr[i - 1] != drr[i]) {
					m++;
					if (m == max) b = i;
					c = i;
				}
				if (m == max) z++;
			}
			for (i = 0; i < b; i++)  grr[++j] = drr[i];

			for (i = c; i < a; i++)  grr[++j] = drr[i];

			for (i = b + z; i < c; i++)  grr[++j] = drr[i];

			for (i = b; i < b + z; i++)  grr[++j] = drr[i];

			for (i = 0; i < a; i++) drr[i] = grr[i];
			cout << "Результат:" << endl;
			for (i = 0; i < a; i++)
			{
				cout << i + 1 << ": " << drr[i] << endl;
			}
		} break;

		case 4:
		{
			cout << "Введите размер массива N: ";
			cin >> a;
			m = 0;
			z = 0;
			sum = 0;
			drr = new int[a];
			grr = new int[a];
			cout << "Заполните массив точками(x y): ";
			i = 0;
			for (i = 0; i < a; i++)
			{
				cin >> drr[i] >> grr[i];
				if (drr[i] < 0 && grr[i] > 0 && sqrt(pow(drr[i], 2) + pow(grr[i], 2)) > sum)
				{
					sum = sqrt(pow(drr[i], 2) + pow(grr[i], 2));
					b = i;
				}
			}
			if (sum > 0)
			cout << "Точка с координатами (" << drr[b] << ", " << grr[b] << ") лежит во 2-й четверти на расстоянии " << sum << " от начала координат." << endl;
			else cout << "(0, 0)" << endl;
		} break;

		case 5:
		{
			cout << "Введите размер массива N: ";
			cin >> a;
			m = 0;
			z = 0;
			sum = 0;
			drr = new int[a];
			grr = new int[a];
			cout << "Заполните массив точками(x y): ";
			i = 0;
			for (i = 0; i < a; i++)
			{
				cin >> drr[i] >> grr[i];
			}
			for (i = 0; i < a - 2; i++)
				for (j = i + 1; j < a - 1; j++)
					for (k = j + 1; k < a; k++)
					{
						if ((sqrt(pow((drr[i] - drr[j]), 2) + pow((grr[i] - grr[j]), 2))
							+ sqrt(pow((drr[j] - drr[k]), 2) + pow((grr[j] - grr[k]), 2))
							+ sqrt(pow((drr[k] - drr[i]), 2) + pow((grr[k] - grr[i]), 2))) > sum)
						{
							sum = sqrt(pow((drr[i] - drr[j]), 2) + pow((grr[i] - grr[j]), 2))
								+ sqrt(pow((drr[j] - drr[k]), 2) + pow((grr[j] - grr[k]), 2))
								+ sqrt(pow((drr[k] - drr[i]), 2) + pow((grr[k] - grr[i]), 2));
							b = i;
							c = j;
							d = k;

						}
					}
			cout << "Треугольник с вершинами (" << drr[b] << ", " << grr[b] << "), (" << drr[c] << ", " << grr[c] << "), (" << drr[d] << ", " << grr[d] << ") имеет наибольший периметр, равный " << sum << "." << endl;
		} break;
		}
	}
}

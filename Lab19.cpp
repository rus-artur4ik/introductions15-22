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
	int menu, a, b, c, d, i, j, k, m, n, z, min, max;
	float *arr, *brr, *crr;
	int *drr, *grr, *hrr, *urr;
	int** zrr;
	while (true) {
		cout << "Введите номер задания (1-5): ";
		cin >> menu;
		switch (menu)
		{
		case 1:
		{
			cout << "Введите количество столбцов и строк матрицы (M, N): ";
			cin >> m >> n;
			zrr = new int*[n];
			for (i = 0; i < n; i++)
				zrr[i] = new int[m];
			cout << "Заполните матрицу " << m << "x" << n << ":" << endl;
			for (i = 0; i < n; i++)
				for (j = 0; j < m; j++)
					cin >> zrr[i][j];
			min = 0;
			max = 0;
			for (i = 0; i < n; i++)
			{
				for (j = 0; j < m; j++)
				{
					if (zrr[i][j] < zrr[i][min]) min = j;
					if (zrr[i][j] > zrr[i][max]) max = j;
				}
				c = zrr[i][min];
				zrr[i][min] = zrr[i][max];
				zrr[i][max] = c;
			}
			cout << "Преобразованная матрица: " << endl;
			for (i = 0; i < n; i++)
				for (j = 0; j < m; j++)
				{
					cout << zrr[i][j] << " ";
					if (j == m - 1) cout << endl;
				}
		} break;

		case 2:
		{
			cout << "Введите количество столбцов и строк матрицы (M, N): ";
			cin >> m >> n;
			zrr = new int*[n];
			for (i = 0; i < n; i++)
				zrr[i] = new int[m];
			cout << "Заполните матрицу " << m << "x" << n << ":" << endl;
			for (i = 0; i < n; i++)
				for (j = 0; j < m; j++)
					cin >> zrr[i][j];
			min = 99999;
			max = -99999;
			for (i = 0; i < n; i++)
			{
				for (j = 0; j < m; j++)
				{
					if (zrr[i][j] < min)
					{
						min = zrr[i][j];
						d = j;
					}
					if (zrr[i][j] > max)
					{
						max = zrr[i][j];
						b = j;
					}
				}
			}
			for (i = 0; i < n; i++)
			{
				c = zrr[i][b];
				zrr[i][b] = zrr[i][d];
				zrr[i][d] = c;
			}
			cout << "Преобразованная матрица: " << endl;
			for (i = 0; i < n; i++)
				for (j = 0; j < m; j++)
				{
					cout << zrr[i][j] << " ";
					if (j == m - 1) cout << endl;
				}
		} break;

		case 3:
		{
			cout << "Введите чётное количество столбцов и строк матрицы (M, N): ";
			cin >> m >> n;
			zrr = new int*[n];
			for (i = 0; i < n; i++)
				zrr[i] = new int[m];
			cout << "Заполните матрицу " << m << "x" << n << ":" << endl;
			for (i = 0; i < n; i++)
				for (j = 0; j < m; j++)
					cin >> zrr[i][j];
			for (i = 0; i < n/2; i++)
			{
				for (j = 0; j < m/2; j++)
				{
					c = zrr[i][j];
					zrr[i][j] = zrr[n / 2 + i][m / 2 + j];
					zrr[n / 2 + i][m / 2 + j] = c;
				}
			}
			cout << "Преобразованная матрица: " << endl;
			for (i = 0; i < n; i++)
				for (j = 0; j < m; j++)
				{
					cout << zrr[i][j] << " ";
					if (j == m - 1) cout << endl;
				}
		} break;

		case 4:
		{
			cout << "Введите количество столбцов и строк матрицы (M, N): ";
			cin >> m >> n;
			zrr = new int*[n];
			for (i = 0; i < n; i++)
				zrr[i] = new int[m];
			cout << "Заполните матрицу " << m << "x" << n << ":" << endl;
			for (i = 0; i < n; i++)
				for (j = 0; j < m; j++)
					cin >> zrr[i][j];
			for (k = 0; k < n; k++)
			{
				for (i = 1; i < n; i++)
				{
					if (zrr[i - 1][0] > zrr[i][0])
						for (j = 0; j < m; j++)
						{
							c = zrr[i - 1][j];
							zrr[i - 1][j] = zrr[i][j];
							zrr[i][j] = c;
						}
				}
			}
			cout << "Преобразованная матрица: " << endl;
			for (i = 0; i < n; i++)
				for (j = 0; j < m; j++)
				{
					cout << zrr[i][j] << " ";
					if (j == m - 1) cout << endl;
				}
		} break;
		case 5:
		{
			cout << "Введите порядок матрицы M: ";
			cin >> m;
			drr = new int[m * 2 - 1];
			zrr = new int*[m];
			for (i = 0; i < m; i++)
				zrr[i] = new int[m];
			cout << "Заполните матрицу " << m << "x" << m << ":" << endl;
			for (i = 0; i < m; i++)
				for (j = 0; j < m; j++)
					cin >> zrr[i][j];
			c = m;
			sum = 0;
			for (k = 0; k < m * 2 - 1; k++)
			{
				for (i = 0; i < m; i++)
				{
						for (j = 0; j < m; j++)
						{
							if (i == j + c - 1)
							{
								sum += zrr[i][j];
							}
						}
				}
				drr[k] = sum;
				sum = 0;
				c--;
			}
			cout << "Суммы элементов диагоналей: " << endl;
			for (k = 0; k < m * 2 - 1; k++) cout << "Сумма элементов " << k + 1 << "-й диагонали: " << drr[k] << "." << endl;
		} break;
		}
	}
}

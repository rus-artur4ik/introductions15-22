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
			cout << "Введите порядок матрицы M и заполните её: ";
			cin >> m;
			zrr = new int*[m];
			for (i = 0; i < m; i++)
				zrr[i] = new int[m];
			for (i = 0; i < m; i++)
				for (j = 0; j < m; j++)
				cin >> zrr[i][j];
			for (k = 0; k < (m / 2 + 1); k++) 
			{
				for (i = k; i < m - k; i++)
				{
					cout << zrr[i][k] << " ";
				}
				i--;
				for (j = k + 1; j < m - k; j++)
				{
					cout << zrr[i][j] << " ";
				}
				j--;
				for (i = m - k - 2; i >= k; i--)
				{
					cout << zrr[i][j] << " ";
				}
				i++;
				for (j = m - k - 2; j > k; j--)
				{
					cout << zrr[i][j] << " ";
				}
				j++;
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
			cout << "Введите номер строки K (1 <= K <= M): ";
			cin >> k;
			k -= 1;
			min = 0;
			max = 1;
			for (j = 0; j < m; j++)
			{
				min += zrr[k][j];
				max *= zrr[k][j];
			}
			cout << "Сумма элементов строки равна " << min << ", а их произведение равно " << max << "." << endl;
		} break;

		case 3:
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
			max = 99999;
			min = 1;
			for (j = 0; j < m; j++)
			{
				for (i = 0; i < n; i++) min *= zrr[i][j];
				if (min < max)
				{
					max = min;
					k = j;
					min = 1;
				}
				else min = 1;
			}
			cout << "Минимальное произведение " << max << " находится в строке " << k+1 << "." << endl;
		} break;

		case 4:
		{
			cout << "Введите количество столбцов и строк матрицы (M, N): ";
			cin >> m >> n;
			zrr = new int*[n];
			drr = new int[m];
			for (i = 0; i < n; i++)
				zrr[i] = new int[m];
			cout << "Заполните матрицу " << m << "x" << n << ":" << endl;
			for (i = 0; i < n; i++)
				for (j = 0; j < m; j++)
				{
					cin >> zrr[i][j];
					drr[j] = 0;
				}
			x = 0;
			for (j = 0; j < m; j++)
			{
				for (i = 0; i < n; i++) x += zrr[i][j];
				for (i = 0; i < n; i++)
				{
					if (zrr[i][j] > x / n) drr[j]++;
				}
				x = 0;
			}
			for (i = 0; i < m; i++)
			cout << i + 1 <<" столбец: " << drr[i] << " элементов больше среднего арифметического по строке." << endl;
		} break;
		case 5:
		{
			cout << "Введите количество столбцов и строк матрицы (M, N): ";
			cin >> m >> n;
			zrr = new int*[n];
			for (i = 0; i < n; i++)
				zrr[i] = new int[m];
			drr = new int[m];
			cout << "Заполните матрицу " << m << "x" << n << ":" << endl;
			for (i = 0; i < n; i++)
				for (j = 0; j < m; j++)
				{
					cin >> zrr[i][j];
					drr[j] = 0;
				}
			b = 0;
			c = n + 1;
			for (j = m - 1; j >= 0; j--)
			{
				for (i = 0; i < n; i++)
				{
					if (zrr[i][j] % 2 == 1) b++;
				}
				if (b == n) c = j;
				b = 0;
			}
			if (c != n + 1) 
			{
				cout << "Номер первого столбца, содержащего все нечётные числа, равен " << c + 1 << "." << endl;
			}
			else cout << "Столбцов, содержащих все нечётные числа, нет: 0." << endl;
		} break;
		}
	}
}

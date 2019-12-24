#include "pch.h"
#include <iostream>
#include <Math.h>
#include <windows.h>
#include <string>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int menu, i, j, n, b, a;
	char c;
	bool marker = true;
	string s = "", s0 = "";
	while (true) {
		cout << "Введите номер задания (1-7): ";
		cin >> menu;
		switch (menu)
		{
		case 1:
		{
			cout << "Введите строку S: ";
			cin.ignore();
			getline(cin, s);
			n = 0;
			for (i = 1; i < s.length(); i++)
				if (s[i - 1] != ' ' && s[i] == ' ') n++;
			cout << "Количество слов в строке: " << n + 1 << endl;
		} break;

		case 2:
		{
			cout << "Введите строку S: ";
			cin.ignore();
			getline(cin, s);
			n = 0;
			b = 99999;
			for (i = 0; i < s.length(); i++)
			{
				if (s[i] != ' ') n++;
				if (s[i] == ' ' || i == s.length() - 1)
				{
					if (n != 0 && n < b) b = n;
					n = 0;
				}
			}
			cout << "Длина самого маленького слова: " << b << endl;
		} break;

		case 3:
		{
			cout << "Введите строку S: ";
			cin.ignore();
			getline(cin, s);
			c = s[0];
			for (i = 1; i < s.length(); i++)
			{
				if (s[i - 1] == ' ' && s[i] != ' ') c = s[i];
				if (s[i] != ' ' && s[i] == c && s[i - 1] != ' ')
				{
					s[i] = '.';
				}
			}
			cout << "Преобразованная строка: " << s << endl;
		} break;

		case 4:
		{
			cout << "Введите строку S: ";
			cin.ignore();
			getline(cin, s);
			n = 0;
			for (i = 0; i < s.length(); i++)
			{
				if (s[i] == 'а' || s[i] == 'е' || s[i] == 'ё' || s[i] == 'и' || s[i] == 'о' || s[i] == 'у' || s[i] == 'ы' || s[i] == 'э' || s[i] == 'ю' || s[i] == 'я')
					n++;
			}
			cout << "Количество гласных в строке: " << n << endl;
		} break;
		case 5:
		{
			cout << "Введите строку S: ";
			cin.ignore();
			getline(cin, s);
			cout << "Имя файла без расширения: ";
			for (i = s.find_last_of(92) + 1; i < s.find_last_of('.'); i++)
			{
				cout << s[i];
			}
			cout << "." << endl;
		} break;
		case 6:
		{
			cout << "Введите строку S: ";
			cin.ignore();
			getline(cin, s);
			cout << "Имя каталога, содержающего файл: ";
			b = 0;
			for (i = 0; i < s.length(); i++)
			{
				if (s[i] == 92) b++;
			}
			if (b == 1)
				for (i = s.find_first_of(92) + 1; i < s.find_last_of('.'); i++)
					cout << s[i];
			else
				for (i = s.find_last_of(92, s.find_last_of(92) - 1) + 1; i < s.find_last_of(92); i++)
				{
					cout << s[i];
				}
			cout << "." << endl;
		} break;
		case 7:
		{
			cout << "Введите строку S: ";
			cin.ignore();
			getline(cin, s);
			s0 = s;
			b = 0;
			for (i = 0; i < s.length(); i++)
			{
				if (i % 2 == 1)
				{
					s[b] = s0[i];
					b++;
				}
			}
			for (i = s.length() - 1; i >= 0; i--)
			{
				if (i % 2 == 0)
				{
					s[b] = s0[i];
					b++;
				}
			}
			cout << "Зашифрованная строка: " << s << "." << endl;
		} break;
		}
	}
}

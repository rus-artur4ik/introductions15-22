#include "pch.h"
#include <iostream>
#include <fstream>
#include <Math.h>
#include <windows.h>
#include <string>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int menu, i, j, n, k, b, a;
	char c;
	fstream F,G;
	bool marker = true;
	string s = "", s0 = "", filename = "", filename2 = "";
	while (true) {
		cout << "Введите номер задания (1-5): ";
		cin >> menu;
		switch (menu)
		{
		case 1:
		{
			cout << "Введите имя файла: " << endl;
			cin.ignore();
			getline(cin, filename);
			F.open(filename);
			if (F)
			{
				while (!F.eof())
				{
					getline(F, s, '\0');
					for (i = s.find(' ') + 1; i < s.length(); i++) F << s[i];
				}
				F.close();
			}
			else cout << "Файл не существует" << endl;

			F.open(filename, ios::out);
			if (F)
			{
				for (i = s.find(' ') + 1; i < s.length(); i++) F << s[i];
				cout << "Дело сделано!" << endl;
				F.close();
			}
			else cout << "Файл не существует" << endl;

			/*cout << "Введите строку S: ";
			cin.ignore();
			getline(cin, s);
			n = 0;
			for (i = 1; i < s.length(); i++)
				if (s[i - 1] != ' ' && s[i] == ' ') n++;
			cout << "Количество слов в строке: " << n + 1 << endl;*/
		} break;

		case 2:
		{
			cout << "Введите имя файла: " << endl;
			cin.ignore();
			getline(cin, filename);
			cout << "Введите целые N и K: " << endl;
			cin >> n >> k;
			F.open(filename, ios::out);
			if (F)
			{
				for (i = 0; i < n; i++)
				{
					for (j = 0; j < k; j++) F << '*';
					F << endl;
				}
					cout << "Дело сделано!" << endl;
				F.close();
			}
			else cout << "Файл не существует" << endl;
		} break;

		case 3:
		{
			cout << "Введите имя первого файла: " << endl;
			cin.ignore();
			getline(cin, filename);
			F.open(filename);
			if (F)
			{
				getline(F, s0, '\0');
				F.close();
			}
			else cout << "Первый файл не существует" << endl;

			cout << "Введите имя второго файла: " << endl;
			getline(cin, filename2);
			G.open(filename2);
			if (G)
			{
				getline(G, s, '\0');
				G.close();
			}
			else cout << "Второй файл не существует" << endl;

			F.open(filename, ios::out);
			if (F)
			{
				F << s << s0;
				cout << "Дело сделано!" << endl;
				F.close();
			}
			else cout << "Файл не существует" << endl;
		} break;

		case 4:
		{
			cout << "Введите имя файла: " << endl;
			cin.ignore();
			getline(cin, filename);
			F.open(filename);
			if (F)
			{
				getline(F, s, '\0');
				F.close();
			}
			else cout << "Первый файл не существует" << endl;

			for (i = 1; i < s.length(); i++)
			{
				if (s[i - 1] == ' ' && s[i] == ' ')
				{
					s.erase(i, 1);
					i--;
				}
			}

			F.open(filename, ios::out);
			if (F)
			{
				F << s;
				cout << "Дело сделано!" << endl;
				F.close();
			}
			else cout << "Файл не существует" << endl;
		} break;
		case 5:
		{
			cout << "Введите имя файла: " << endl;
			cin.ignore();
			getline(cin, filename);
			F.open(filename);
			if (F)
			{
				getline(F, s, '\0');
				F.close();
			}
			else cout << "Первый файл не существует" << endl;
			b = 0;
			for (i = 4; i < s.length(); i++)
			{
				if (s[i - 4] == ' ' && s[i - 3] == ' ' && s[i - 2] == ' ' && s[i - 1] == ' ' && s[i] == ' ')
				{
					b++;
				}
			}

			 cout << "Количество абзацев в тексте: " << b << endl;
		} break;
		}
	}
}

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
	size_t z;
	char c;
	bool marker = true;
	string s = "", s0 = "";
	while (true) {
		cout << "Введите номер задания (1-5): ";
		cin >> menu;
		switch (menu)
		{
		case 1:
		{
			cout << "Введите символ С:";
			cin >> c;
			cout << char(int(c) - 1) << " < " << c << " < " << char(int(c) + 1) << endl;
		} break;

		case 2:
		{
			cout << "Введите строку S: ";
			cin.ignore();
			getline(cin, s);
			for (i = 0; i < s.length(); i++)
				cout << s[i] << " ";
			cout << endl;
		} break;

		case 3:
		{
			cout << "Введите строку S: ";
			cin.ignore();
			getline(cin, s);
			n = 0;
			for (i = 0; i < s.length(); i++)
				if (s[i] >= 'A' && s[i] <= 'Z') n++;
			cout << "Количество прописных латинских букв в строке: " << n << endl;
		} break;

		case 4:
		{
			cout << "Введите строку S: ";
			cin.ignore();
			getline(cin, s);
			cout << "Введите символ С: ";
			cin >> c;
			for (i = s.length() - 1; i >= 0; i--)
			{
				if (s[i] == c) s.insert(i, 1, c);
			}
			cout << s << endl;
		} break;
		case 5:
		{
			cout << "Введите строку S: " << endl;
			cin.ignore();
			getline(cin, s);
			cout << "Введите строку S0: " << endl;
			getline(cin, s0);
			n = 0;
			while (s.find(s0) >= 0 && s.find(s0) < s.length() + 1)
			{
				s.erase(s.find(s0), s0.length());
				n++;
			}
			cout << "Количество вхождений:" << n << endl;
		} break;
		}
	}
}

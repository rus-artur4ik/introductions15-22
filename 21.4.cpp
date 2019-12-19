#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int countVowel(string str)
{
	size_t count = 0;
	string vowel = "аоуеыиеяёэ";

	for (size_t i = 0; i < str.length(); i++)
		if (vowel.find(str[i]) != -1) count++;

	return count;
}

int main()
{
	setlocale(LC_ALL, "Russia");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string userStr;
	getline(cin, userStr);
	cout << countVowel(userStr);
}

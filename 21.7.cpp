#include <iostream>
#include <string>

using namespace std;

string encryptString(string str)
{
	string encrypted;
	for (size_t i = 1; i < str.length(); i += 2)
		encrypted += str[i];

	size_t start;
	if (str.length() % 2 == 1)
		start = str.length() - 1;
	else
		start = str.length() - 2;

	for (size_t i = start; i > 0; i -= 2)
		encrypted += str[i];
	encrypted += str[0];

	return encrypted;
}

int main()
{
	setlocale(LC_ALL, "Russia");

	string userStr;
	getline(cin, userStr);

	if (userStr.empty()) return 0;

	cout << encryptString(userStr);

	return 0;
}

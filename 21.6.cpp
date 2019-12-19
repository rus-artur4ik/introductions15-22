#include <iostream>
#include <string>

using namespace std;

string catalogName(string wayToFile)
{
	string catalog;
	size_t closeSlash = wayToFile.find_last_of('\\');
	wayToFile.erase(closeSlash);
	size_t openSlash = wayToFile.find_last_of('\\');
	return wayToFile.substr(openSlash + 1, closeSlash - openSlash);
	
}

int main()
{
	setlocale(LC_ALL, "Russia");

	string userStr;
	getline(cin, userStr);

	if (userStr.empty()) return 0;

	cout << catalogName(userStr);

	return 0;
}

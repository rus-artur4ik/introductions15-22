#include <iostream>
#include <string>

using namespace std;

string fileName(string wayToFile)
{
	size_t slashPos = wayToFile.find_last_of('\\') + 1;
	size_t pointPos = wayToFile.find_last_of('.') - 1;
	return wayToFile.substr(slashPos, pointPos - slashPos);
}

int main()
{
	setlocale(LC_ALL, "Russia");

	string userStr;
	getline(cin, userStr);

	if (userStr.empty()) return 0;

	cout << fileName(userStr);

	return 0;
}

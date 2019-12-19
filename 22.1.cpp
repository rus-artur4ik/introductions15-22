#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string readFile(string filename)
{
	ifstream file;
	string text;
	string buff;

	file.open(filename);
	while (file)
	{
		file >> buff;
		text += buff;
		text += ' ';
	}
	file.close();

	return text;
}

void writeFile(string filename, string textToWrite)
{
	ofstream file;
	file.open(filename);
	file << textToWrite;
	file.close();
}

void changeString(string &str)
{
	str = str.substr(str.find_first_of(' ') + 1);
}

int main()
{
	setlocale(LC_ALL, "Russia");

	string filename = "C:\\Users\\MOLODEC\\source\\repos\\LabWorks\\file.txt";
	string text = readFile(filename);
	cout << text << '\n';
	changeString(text);
	cout << text;

	return 0;
}

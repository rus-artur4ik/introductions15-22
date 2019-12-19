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

void editText(string &text)
{
	while (text.find('  ') != string::npos)
		text.erase(text.find('  '));
}

int main()
{
	setlocale(LC_ALL, "Russia");

	string filename = "C:\\Users\\MOLODEC\\source\\repos\\LabWorks\\file.txt";
	string textToWrite = "fdgdhdahgsfhjfdsfhgdfsg5435s    sdh456sh4g6     d";

	writeFile(filename, textToWrite);
	string text = readFile(filename);
	editText(text);
	writeFile(filename, text);
	cout << readFile(filename);

	return 0;
}

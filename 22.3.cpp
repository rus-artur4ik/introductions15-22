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

int main()
{
	setlocale(LC_ALL, "Russia");

	string filename1 = "C:\\Users\\MOLODEC\\source\\repos\\LabWorks\\file1.txt";
	string filename2 = "C:\\Users\\MOLODEC\\source\\repos\\LabWorks\\file2.txt";

	string textToWrite1 = "fdgdhdahgsfhjfdsfhgdfsg5435s sdh456sh4g6 d";
	string textToWrite2 = "fdsfgafg sdfh sdfgh dfgh aseg hgsfghj dfhgj adhg";

	writeFile(filename1, textToWrite1);
	writeFile(filename2, textToWrite2);

	string buffer = readFile(filename2);
	buffer += readFile(filename1);
	writeFile(filename1, buffer);
	cout << readFile(filename1);


	return 0;
}

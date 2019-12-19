#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int countParagraphes(string filename)
{
	ifstream file;
	int count = 0;
	file.open(filename);
	while (file)
		if (file.get() == '\n') count++;
	file.close();

	return count;
}

int main()
{
	setlocale(LC_ALL, "Russia");

	string filename = "C:\\Users\\MOLODEC\\source\\repos\\LabWorks\\file.txt";
	cout << countParagraphes(filename);

	return 0;
}

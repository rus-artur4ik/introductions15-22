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

string generateString(int K)
{
	string str;
	for (int i = 0; i < K; i++)
		str += '*';

	return str;
}

void writeFile(string filename, int N, int K)
{
	ofstream file;
	file.open(filename);

	string stringToWrite = generateString(K);
	for (int i = 0; i < N; i++)
		file << stringToWrite << endl;

	file.close();
}

int main()
{
	setlocale(LC_ALL, "Russia");
	int N, K;
	string name;
	cin >> N >> K >> name;

	string filename = "C:\\Users\\MOLODEC\\source\\repos\\LabWorks\\" + name + ".txt";

	writeFile(filename, N, K);

	cout << readFile(filename);

	return 0;
}

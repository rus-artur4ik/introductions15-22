#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russia");

	string a;
	cout << "Vvedite Stroku" << endl;
	getline(cin, a);

	char pervak = a[0];
	bool flag = true;

	for (int i = 1; i < a.length(); i++)
	{
		if (a[i] == ' ')
		{
			flag = false;
		}


		if (flag)
		{
			if (a[i] == pervak)
			{
				a[i] = '.';
			}
		}

		if ((a[i] != ' ') && (flag == false))
		{
			flag = true;
			pervak = a[i];
		}
	}

	cout << "otvet = " << a << endl;

	return 0;

}

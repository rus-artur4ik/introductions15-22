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

	int kolvo_min = 100000;
	int kolvo_promezhnost = 0;

	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] == ' ')
		{
			if ((kolvo_promezhnost < kolvo_min) && (a[i - 1] != ' '))
			{
				kolvo_min = kolvo_promezhnost;
			}
			kolvo_promezhnost = 0;
		}
		else
		{
			kolvo_promezhnost++;
		}
	}

	cout << "Dlina samogo korotkogo slova = " << kolvo_min;

	return 0;

}

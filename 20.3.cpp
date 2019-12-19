#include <iostream>
#include <cstring>

using namespace std;

int main()
{

	string s;
	cout << "Vvedite S" << endl;
	cin >> s;

	int kolvo = 0;

	for (int i = 0; i < s.length(); i++)
	{
		if (isupper(s[i]))
		{
			kolvo++;
		}
	}

	cout << kolvo;
	
	return 0;

}

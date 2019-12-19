#include <iostream>
#include <cstring>

using namespace std;

int main()
{

	string a;
	cout << "Vvedite S" << endl;
	cin >> a;

	char c;
	cout << "Vvedite C" << endl;
	cin >> c;

	string newstring;

	for (int i = 0; i < a.length(); i++)
	{
		newstring += a[i];
		if (a[i] == c)
		{
			newstring += a[i];
		}
	}

	cout << newstring;
	
	return 0;

}

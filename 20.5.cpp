#include <iostream>
#include <string>

using namespace std;

int main()
{

	string a;
	cout << "Vvedite S" << endl;
	cin >> a;

	string c;
	cout << "Vvedite S0" << endl;
	cin >> c;

	int kolvo = 0;

	while (a.find(c) != string::npos)
	{
		a.replace(a.find(c), c.length(), "");
		kolvo++;
	}

	cout << kolvo;
	
	return 0;

}

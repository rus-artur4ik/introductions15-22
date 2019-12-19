#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{

	string s;
	cout << "Vvedite S" << endl;
	cin >> s;

	string newstring;

	for (int i = 0; i < s.length(); i++)
	{
		newstring += s[i];
		newstring += ' ';
	}

	cout << newstring;
	
	return 0;

}

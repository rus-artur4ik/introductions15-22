#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

	char c;
	cout << "Vvedite C" << endl;
	cin >> c;

	int pered = (int)c - 1;
	int posle = (int)c + 1;

	cout << "Pered: " << (char)pered << ". Posle: " << (char)posle << "." << endl;
	
	return 0;

}

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	
	cout << "Vvedite razmer matrici" << endl;
	int m, n;
	cin >> m >> n;

	cout << "Vvedite K" << endl;
	int k;
	cin >> k;

	vector < vector <int> > matrix(m, vector <int>(n));

	cout << "Vvedite matrix" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> matrix[i][j];
		}
	}
	int sum = 0;
	int proizv = 1;

	for (int i = 0; i < n; i++)
	{
		sum += matrix[k-1][i];
		proizv *= matrix[k-1][i];
	}

	cout << "Proizvedenie = " << proizv << " Summa = " << sum << endl;
	return 0;

}

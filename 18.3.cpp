#include <iostream>
#include <vector>

using namespace std;

int main()
{
	
	cout << "Vvedite razmer matrici" << endl;
	int m, n;
	cin >> m >> n;

	vector < vector <int> > matrix(m, vector <int>(n));

	cout << "Vvedite matrix" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> matrix[i][j];
		}
	}
	int proizv = 1;
	int min = 2147483647;
	int k = -1;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			proizv *= matrix[j][i];
		}

		if (min > proizv)
		{
			min = proizv;
			k = i;
		}
		proizv = 1;
	}

	cout << "Proizvedenie = " << min << " Nomer = " << k+1 << endl;
	return 0;

}
